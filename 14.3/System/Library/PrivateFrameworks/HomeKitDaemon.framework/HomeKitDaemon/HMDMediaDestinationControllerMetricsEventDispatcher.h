@class NSUUID, HMDLogEventDispatcher, NSString, NSArray, HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent, HMFUnfairLock;
@protocol HMDMediaDestinationControllerMetricsEventDispatcherDataSource;

@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider> {
    HMFUnfairLock *_lock;
}

@property (weak) id<HMDMediaDestinationControllerMetricsEventDispatcherDataSource> dataSource;
@property (readonly) NSUUID *identifier;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher;
@property (retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *trackedStagedDestinationIdentifierEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)submitFailureEventWithEventErrorCode:(unsigned long long)a0 error:(id)a1;
- (void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)a0 existingDestinationIdentifier:(id)a1;
- (void)triggerLogEventProviderDailySubmissionBlocks;
- (id)dataSourceDestinationTypeWithIdentifier:(id)a0;
- (id)dataSourceIsTriggeredOnControllerDevice;
- (id)dataSourceCurrentUserPrivilege;
- (id)dataSourceCurrentDestinationType;
- (id)dataSourceCurrentUser;
- (void)submitDailySetDestinationEvent;
- (id)initWithIdentifier:(id)a0 logEventDispatcher:(id)a1 dataSource:(id)a2;
- (void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)a0 existingDestinationIdentifier:(id)a1;
- (void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)a0;
- (void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)a0;

@end
