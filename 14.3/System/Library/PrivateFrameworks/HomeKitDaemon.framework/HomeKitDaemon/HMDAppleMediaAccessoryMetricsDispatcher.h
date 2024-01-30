@class NSString, HMDLogEventDispatcher, HMDLogEventDailyScheduler, NSArray;
@protocol HMFLocking, HMDAppleMediaAccessoryMetricsDispatcherDataSource;

@interface HMDAppleMediaAccessoryMetricsDispatcher : HMFObject <HMDLogEventDailyProvider> {
    id<HMFLocking> _lock;
}

@property (readonly) HMDLogEventDispatcher *logEventDispatcher;
@property (readonly) HMDLogEventDailyScheduler *logEventDailyScheduler;
@property (readonly, weak) id<HMDAppleMediaAccessoryMetricsDispatcherDataSource> dataSource;
@property (copy) NSString *previousRoomName;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 logEventDispatcher:(id)a1 logEventDailyScheduler:(id)a2;
- (void)submitDailySetRoomEvent;
- (void)registerForDailySetRoomLogEvents;
- (void)submitRoomChangeEvent:(id)a0 previousRoom:(id)a1;
- (void)triggerLogEventProviderDailySubmissionBlocks;

@end
