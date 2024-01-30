@protocol PLABMClientMessageDelegate;

@interface PLABMClient : NSObject {
    struct dispatch_queue_s { } *_queue;
    struct shared_ptr<abm::client::Manager> { struct Manager *__ptr_; struct __shared_weak_count *__cntrl_; } abmPLClnt;
}

@property (retain) id<PLABMClientMessageDelegate> delegate;

+ (id)sharedABMClient;

- (void)regMetricListener;
- (id)init;
- (void).cxx_destruct;
- (void)addICEDeviceConfigDebug;
- (id)getLTESleepManagerStats;
- (void)sendMetricToLoggerUsing:(id)a0;
- (void)sendTriggerToLoggerUsing:(id)a0;
- (id)getBasebandBootState;
- (void)sendWakeInfoToLoggerUsing:(id)a0;
- (void)startListening;
- (void)addICEDeviceConfig;
- (id).cxx_construct;
- (id)getBasebandTimeAndLatency;
- (void)regBBWakeListener;
- (void)addMavDeviceConfigDebug;
- (void)sendBootStateChangInfoToLoggerUsing:(id)a0;
- (void)regBootStateListener;
- (void)removeDeviceConfig;
- (void)addMavDeviceConfig;
- (void)triggerPeriodicMetrics;
- (void)regTriggerListener;
- (void)addDeviceConfigWith:(id)a0;

@end
