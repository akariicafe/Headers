@class UILayoutGuide, NSString, NSLayoutConstraint, CRSUIApplicationSceneSettingsDiffInspector;

@interface CRSUIWindow : UIWindow <_UISceneSettingsDiffAction>

@property (retain, nonatomic) CRSUIApplicationSceneSettingsDiffInspector *settingsDiffInspector;
@property (nonatomic) double bannerHeight;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (readonly, nonatomic) UILayoutGuide *notificationLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 windowScene:(id)a2;
- (void).cxx_destruct;
- (id)_mapSettings;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (id)initWithWindowScene:(id)a0;
- (id)_settings;
- (void)notificationLayoutGuideDidChange;
- (void)_updateMapStyleTrait;

@end
