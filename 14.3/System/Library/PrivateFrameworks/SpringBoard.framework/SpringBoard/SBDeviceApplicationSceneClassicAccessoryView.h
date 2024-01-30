@class UIView, NSString, SBSceneHandleBlockObserver, SBDeviceApplicationSceneHandle, UIButton, SBOrientationTransformWrapperView, UIApplicationSceneSettingsDiffInspector, NSLayoutConstraint, UIApplicationSceneClientSettingsDiffInspector;
@protocol SBDeviceApplicationSceneClassicAccessoryViewDelegate;

@interface SBDeviceApplicationSceneClassicAccessoryView : UIView <BSInvalidatable> {
    UIView *_zoomButtonWrapperView;
    UIButton *_zoomButton;
    SBOrientationTransformWrapperView *_transformWrapperView;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSLayoutConstraint *_zoomButtonHorizontalConstraint;
    NSLayoutConstraint *_zoomButtonVerticalConstraint;
    NSLayoutConstraint *_zoomButtonWidthConstraint;
    NSLayoutConstraint *_zoomButtonHeightConstraint;
}

@property (readonly, retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) long long buttonOrientation;
@property (weak, nonatomic) id<SBDeviceApplicationSceneClassicAccessoryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)a0 previousSettings:(id)a1;
- (void)dealloc;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)a0 transitionContext:(id)a1;
- (void)layoutSubviews;
- (BOOL)_isZoomed;
- (void)invalidate;
- (void)_updateZoomButton;
- (void)_changeZoom:(id)a0;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)a0 offscreen:(BOOL)a1;
- (void)_updateZoomButtonVisibilityAnimated:(BOOL)a0;
- (BOOL)_zoomButtonShouldBeVisible;
- (void)_updateOrientationFrom:(long long)a0 toOrientation:(long long)a1 animationSettings:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sceneHandle:(id)a1;

@end
