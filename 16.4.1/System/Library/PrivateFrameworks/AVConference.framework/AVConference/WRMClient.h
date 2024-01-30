@class NSObject;
@protocol WRMClientDelegate, OS_xpc_object, OS_dispatch_queue;

@interface WRMClient : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id _wrmClientDelegate;
    int _mode;
    struct { BOOL reportImmediateMetricsEnabled; BOOL reportRtpErasureMetricsEnabled; BOOL allowPreWarmCellEnabled; } _metricsConfig;
    int _rssiThreshold;
}

@property id<WRMClientDelegate> delegate;
@property int mediaControlInfoVersion;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void)setConfiguration:(struct { unsigned long long x0; } *)a0;
- (BOOL)setupServiceConnection;
- (void)dumpReport:(id)a0;
- (int)getWRMSubscribeVersion;
- (void)processNotificationList:(id)a0;
- (void)processWRMCoexMetrics:(id)a0 isAlertedMode:(BOOL)a1;
- (void)releaseServiceConnection;
- (void)reportImmediateMetric:(int)a0 value:(unsigned long long)a1;
- (void)reportMetricsFaceTimeCalling:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; } *)a0;
- (void)reportMetricsWifiCalling:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; } *)a0;
- (void)requestNotificationFaceTimeCalling;
- (void)sendProcessInfoWithProcessID:(unsigned long long)a0;
- (void)sendReport:(id)a0;
- (void)sendStatusUpdateFaceTimeCalling:(const struct { int x0; int x1; int x2; unsigned int x3; } *)a0;
- (void)sendStatusUpdateInfoFaceTimeCalling:(id)a0;
- (void)sendSubscriptionInfoFaceTimeCalling;
- (void)sendUnsubscriptionInfoFaceTimeCalling;
- (void)setPreWarmState:(BOOL)a0;
- (void)setRSSIThresholdEnabled:(BOOL)a0;
- (void)startWRMClientWithMode:(int)a0 metricsConfig:(struct { BOOL x0; BOOL x1; BOOL x2; })a1;
- (void)stopWRMClient;
- (void)updateMetricsConfig:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;

@end
