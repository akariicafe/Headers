@class VCWCMClient, VCRecommendedNetworkSettings, VCConnectionManager, WRMClient;
@protocol VCNetworkFeedbackControllerDelegate;

@interface VCNetworkFeedbackController : NSObject <WCMClientDelegate, WRMClientDelegate> {
    id<VCNetworkFeedbackControllerDelegate> _weakDelegate;
    VCWCMClient *_WCMClient;
    WRMClient *_WRMClient;
    VCConnectionManager *_connectionManager;
    VCRecommendedNetworkSettings *_recommendedSettings;
    double _wrmReportingInterval;
    int _wrmPendingBitrateCapDelta;
    BOOL _isWRMNotificationPending;
    struct { int applicationType; int linkTypeSuggestion; unsigned long long linkTypeChangeReasonCode; char linkTypeChangeReasonString[128]; unsigned long long linkBandwidthMin; unsigned long long linkBandwidthMax; } _savedWRMNotification;
    BOOL _isStarted;
}

@property (readonly) unsigned int recommendedTargetBitrateCap;
@property unsigned int clientTargetBitrate;
@property unsigned int clientTargetBitrateCap;
@property (nonatomic) unsigned int downlinkTargetBitrate;
@property (nonatomic) unsigned int downlinkTargetCellBitrateCap;
@property (readonly) struct tagWRMMetricsInfo { BOOL x0; struct tagHANDLE *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; int x17; void /* function */ *x18; struct { void *x0; void /* function */ *x1; void /* function */ *x2; } x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned long long x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; } *wrmInfo;
@property (readonly) struct { void *x0; void /* function */ *x1; void /* function */ *x2; } *wrmContext;
@property unsigned int callID;
@property (nonatomic) BOOL isLocalCellular;
@property (nonatomic) BOOL isVideoPaused;
@property BOOL shouldSendFeedbackControllerReport;

- (id)strongDelegate;
- (void)dealloc;
- (void)stop;
- (void)setWRMNotification:(struct { int x0; int x1; unsigned long long x2; char x3[128]; unsigned long long x4; unsigned long long x5; } *)a0;
- (void)setPreWarmState:(BOOL)a0;
- (void)requestWRMNotification;
- (void)initializeWRMInfo;
- (void)cleanupWRMData;
- (void)setupWCMClient;
- (void)setupWRMClientWithMetricsConfig:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)cleanupWRMClient;
- (void)cleanupWCMClient;
- (void)updateMetricsConfig:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)setRSSIThresholdEnabled:(BOOL)a0;
- (void)wcmSetCallConfig:(unsigned int)a0 interferenceLevel:(unsigned int)a1;
- (void)wcmGetCallConfig:(unsigned int *)a0 targetBitrate:(unsigned int *)a1;
- (void)setWRMMetricConfig:(struct { unsigned long long x0; } *)a0;
- (void)setWRMCoexMetrics:(id)a0;
- (id)initWithDelegate:(id)a0 connectionManager:(id)a1;
- (void)startWithMetricsConfig:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)sendFeedbackControllerReport:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)sendStatusUpdate:(const struct { int x0; int x1; int x2; unsigned int x3; } *)a0;
- (void)reportImmediateWRMMetric:(int)a0 value:(unsigned long long)a1;
- (void)reportWRMMetrics:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; } *)a0;

@end
