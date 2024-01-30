@class VKMapView, NSString, UIView;

@interface MKBasicMapView : UIView <GEOResourceManifestTileGroupObserver> {
    UIView *_hostView;
    long long _changingViewSizeCount;
}

@property (readonly, nonatomic) VKMapView *mapView;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (readonly, nonatomic, getter=isInBackground) BOOL inBackground;
@property (nonatomic) BOOL rendersInBackground;
@property (nonatomic) BOOL hasRenderedSomething;
@property (nonatomic) double mapModeStartTime;
@property (nonatomic) double trafficStartTime;
@property (readonly, nonatomic, getter=isChangingViewSize) BOOL changingViewSize;
@property (nonatomic) BOOL inactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)_finishChangingViewSize;
- (void)_unregisterSceneNotifications;
- (void)_registerSceneNotifications;
- (void)updateStatsForEnablingTraffic:(BOOL)a0;
- (void)_finishedSnapshot:(id)a0;
- (void)didMoveToWindow;
- (void)_updateMapViewHidden;
- (void)updateStatsForTrafficEnabledTime;
- (void)_beginChangingViewSize;
- (void)setHidden:(BOOL)a0;
- (BOOL)isPointValidForGesturing:(struct CGPoint { double x0; double x1; })a0;
- (void)addCalloutSubview:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)_sceneDidEnterBackground:(id)a0;
- (void)_updateForCurrentScreen;
- (void)_updateStatsForTrafficEnabledTime:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andGlobe:(BOOL)a1 shouldRasterize:(BOOL)a2 allowsAntialiasing:(BOOL)a3 carDisplayType:(long long)a4;
- (void)_sceneWillEnterForeground:(id)a0;
- (void)_didEnterBackground;
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)a0 ignoreIfViewInWindow:(BOOL)a1;
- (void)updateStatsForSwitchingToMapType:(int)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateBackgroundState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andGlobe:(BOOL)a1 shouldRasterize:(BOOL)a2;
- (void)_updateBackgroundState:(long long)a0;
- (struct CGPoint { double x0; double x1; })convertCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 toPointToView:(id)a1;
- (struct CGSize { double x0; double x1; })calloutContainerCanvasSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andGlobe:(BOOL)a1 shouldRasterize:(BOOL)a2 allowsAntialiasing:(BOOL)a3;
- (double)calloutContainerCanvasScale;
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)a0;
- (void)_animateCanvasForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 toCameraModelPointToView:(id)a1;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateFromView:(id)a1;

@end
