@class NSUUID, NSString, HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent;
@protocol HMDMediaDestinationControllerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyTaskRunner> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<HMDMediaDestinationControllerMetricsEventDispatcherDataSource> dataSource;
@property (readonly) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *trackedStagedDestinationIdentifierEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)dataSourceCurrentDestinationType;
- (id)dataSourceCurrentUser;
- (id)dataSourceCurrentUserPrivilege;
- (id)dataSourceDestinationTypeWithIdentifier:(id)a0;
- (id)dataSourceIsTriggeredOnControllerDevice;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 dataSource:(id)a2;
- (void)runDailyTask;
- (void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)a0;
- (void)submitDailySetDestinationEvent;
- (void)submitFailureEventWithEventErrorCode:(unsigned long long)a0 error:(id)a1;
- (void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)a0 existingDestinationIdentifier:(id)a1;
- (void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)a0;
- (void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)a0 existingDestinationIdentifier:(id)a1;

@end
