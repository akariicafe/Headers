@protocol PLABMClientMessageDelegate;

@interface PLABMClient : NSObject {
    struct dispatch_queue_s { } *_queue;
    struct shared_ptr<abm::client::Manager> { struct Manager *__ptr_; struct __shared_weak_count *__cntrl_; } abmPLClnt;
}

@property (retain) id<PLABMClientMessageDelegate> delegate;

+ (id)sharedABMClient;

- (void)startListening;
- (id)getBasebandTimeAndLatency;
- (void)addDeviceConfigWith:(id)a0;
- (void)addICEDeviceConfig;
- (id)getBasebandBootState;
- (void)sendBootStateChangInfoToLoggerUsing:(id)a0;
- (void)sendTriggerToLoggerUsing:(id)a0;
- (void)regMetricListener;
- (void)regTriggerListener;
- (void)sendMetricToLoggerUsing:(id)a0;
- (void).cxx_destruct;
- (void)addICEDeviceConfigDebug;
- (id)init;
- (id)getLTESleepManagerStats;
- (void)triggerPeriodicMetrics;
- (void)regBootStateListener;
- (void)addMavDeviceConfigDebug;
- (void)regBBWakeListener;
- (id).cxx_construct;
- (void)addMavDeviceConfig;
- (void)sendWakeInfoToLoggerUsing:(id)a0;
- (void)removeDeviceConfig;

@end
