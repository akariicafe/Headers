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
}

@property (readonly) unsigned int recommendedTargetBitrateCap;
@property unsigned int clientTargetBitrate;
@property unsigned int clientTargetBitrateCap;
@property (nonatomic) unsigned int downlinkTargetBitrate;
@property (nonatomic) unsigned int downlinkTargetCellBitrateCap;

- (void)dealloc;
- (void)stop;
- (id)strongDelegate;
- (void)start;
- (void)requestWRMNotification;
- (void)setPreWarmState:(BOOL)a0;
- (void)setupWCMClient;
- (void)setupWRMClient;
- (void)cleanupWRMClient;
- (void)cleanupWCMClient;
- (void)wcmSetCallConfig:(unsigned int)a0 interferenceLevel:(unsigned int)a1;
- (void)wcmGetCallConfig:(unsigned int *)a0 targetBitrate:(unsigned int *)a1;
- (void)setWRMMetricConfig:(struct { unsigned long long x0; } *)a0;
- (void)setWRMNotification:(struct { int x0; int x1; unsigned long long x2; char x3[128]; unsigned long long x4; unsigned long long x5; } *)a0;
- (void)setWRMCoexMetrics:(id)a0;
- (id)initWithDelegate:(id)a0 connectionManager:(id)a1;
- (void)sendFeedbackControllerReport:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)sendStatusUpdate:(const struct { int x0; int x1; int x2; unsigned int x3; } *)a0;

@end
