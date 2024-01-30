@class NSString, HMDLogEventDailyScheduler;
@protocol HMMLogEventSubmitting, HMDAppleMediaAccessoryMetricsDispatcherDataSource;

@interface HMDAppleMediaAccessoryMetricsDispatcher : HMFObject <HMDLogEventDailyTaskRunner> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMDLogEventDailyScheduler *dailyScheduler;
@property (readonly, weak) id<HMDAppleMediaAccessoryMetricsDispatcherDataSource> dataSource;
@property (copy) NSString *previousRoomName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2;
- (void)registerForDailySetRoomLogEvents;
- (void)runDailyTask;
- (void)submitDailySetRoomEvent;
- (void)submitDailyStatusEvent;
- (void)submitRoomChangeEvent:(id)a0 previousRoom:(id)a1;

@end
