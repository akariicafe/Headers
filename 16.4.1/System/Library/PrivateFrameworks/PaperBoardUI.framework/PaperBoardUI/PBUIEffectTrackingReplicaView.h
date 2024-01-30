@class NSString, PBUISnapshotReplicaView, PBUIPortalReplicaEffectView;
@protocol PBUIFakeBlurObserver, PBUIPosterReplicaSnapshotProviding, PBUIPosterReplicaPortalProviding, PBUIEffectTrackingReplicaViewDelegate;

@interface PBUIEffectTrackingReplicaView : UIView <PBUIFakeBluring, BSInvalidatable> {
    BOOL _observesSnapshotValidity;
    PBUISnapshotReplicaView *_snapshotsView;
    PBUIPortalReplicaEffectView *_portalView;
}

@property (nonatomic) long long style;
@property (nonatomic) BOOL requiresSnapshotTreatment;
@property (nonatomic) double effectWeight;
@property (nonatomic) BOOL showsSnapshot;
@property (copy, nonatomic) NSString *reason;
@property (weak, nonatomic) id<PBUIPosterReplicaSnapshotProviding> snapshotProvider;
@property (weak, nonatomic) id<PBUIPosterReplicaPortalProviding> portalProvider;
@property (weak, nonatomic) id<PBUIEffectTrackingReplicaViewDelegate> delegate;
@property (weak, nonatomic) id<PBUIFakeBlurObserver> observer;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) BOOL shouldMatchWallpaperPosition;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)effectiveStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)offsetWallpaperBy:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (void)requestStyle:(long long)a0;

@end
