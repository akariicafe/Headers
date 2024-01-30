@class _UILegibilitySettings, NSString, _UIPortalView, PBUIReplicaDebugView;
@protocol BSInvalidatable, PBUIPosterReplicaPortalProviding, PBUIReplicaPortalSource;

@interface PBUIPortalReplicaView : UIView <PBUIPosterReplicaView, PBUIWallpaperPositioning> {
    id<BSInvalidatable> _providerToken;
    id<BSInvalidatable> _sourceToken;
    _UIPortalView *_portalView;
    _UILegibilitySettings *_legibilitySettings;
    BOOL _invalidated;
}

@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (weak, nonatomic) id<PBUIPosterReplicaPortalProviding> provider;
@property (readonly, nonatomic) id<PBUIReplicaPortalSource> source;
@property (copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) PBUIReplicaDebugView *debugView;
@property (readonly, nonatomic) long long effectiveStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldMatchWallpaperPosition;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;

- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setNeedsProviderUpdate;
- (void)setNeedsSourceUpdate;

@end
