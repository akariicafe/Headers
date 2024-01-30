@class NSString, NSArray, HMDLogEventDailyScheduler;
@protocol HMFLocking, HMMLogEventSubmitting, HMDAppleMediaAccessoryMetricsDispatcherDataSource;

@interface HMDAppleMediaAccessoryMetricsDispatcher : HMFObject <HMDLogEventDailyProvider> {
    id<HMFLocking> _lock;
}

@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMDLogEventDailyScheduler *logEventDailyScheduler;
@property (readonly, weak) id<HMDAppleMediaAccessoryMetricsDispatcherDataSource> dataSource;
@property (copy) NSString *previousRoomName;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)triggerLogEventProviderDailySubmissionBlocks;
- (id)initWithDataSource:(id)a0 logEventSubmitter:(id)a1 logEventDailyScheduler:(id)a2;
- (void)registerForDailySetRoomLogEvents;
- (void)submitDailySetRoomEvent;
- (void)submitRoomChangeEvent:(id)a0 previousRoom:(id)a1;

@end
