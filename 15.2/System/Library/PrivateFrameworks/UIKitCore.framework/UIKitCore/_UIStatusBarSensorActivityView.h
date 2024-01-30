@class _UIPortalView, NSString, UIView, UIAccessibilityHUDItem;

@interface _UIStatusBarSensorActivityView : UIView <_UIStatusBarDisplayable>

@property (retain, nonatomic) _UIPortalView *portalView;
@property (retain, nonatomic) UIView *sensorActivityView;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)configurePortalViewIfNeeded;
- (void).cxx_destruct;
- (void)configureSensorViewWithoutPortalIfNeeded;

@end
