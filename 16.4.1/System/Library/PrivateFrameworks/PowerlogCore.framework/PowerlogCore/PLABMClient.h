@protocol PLABMClientMessageDelegate;

@interface PLABMClient : NSObject {
    struct dispatch_queue_s { } *_queue;
    struct shared_ptr<abm::client::Manager> { struct Manager *__ptr_; struct __shared_weak_count *__cntrl_; } abmPLClnt;
}

@property (retain) id<PLABMClientMessageDelegate> delegate;

+ (id)sharedABMClient;

- (void)startListening;
- (id)getLTESleepManagerStats;
- (void)addICEDeviceConfig;
- (id).cxx_construct;
- (void)regMetricListener;
- (void)regTriggerListener;
- (void)regBootStateListener;
- (id)getBasebandTimeAndLatency;
- (void)addDeviceConfigWith:(id)a0;
- (void)addMavDeviceConfigDebug;
- (void)triggerPeriodicMetrics;
- (void)removeDeviceConfig;
- (void)sendTriggerToLoggerUsing:(id)a0;
- (void)sendBootStateChangInfoToLoggerUsing:(id)a0;
- (void)regBBWakeListener;
- (id)init;
- (void)sendWakeInfoToLoggerUsing:(id)a0;
- (void)addMavDeviceConfig;
- (void)addICEDeviceConfigDebug;
- (id)getBasebandBootState;
- (void).cxx_destruct;
- (void)sendMetricToLoggerUsing:(id)a0;

@end
