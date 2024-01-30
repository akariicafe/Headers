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

+ (id)_stringForStyle:(long long)a0;

- (id)initWithWindowScene:(id)a0;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)commonInit;
- (id)_settings;
- (void).cxx_destruct;
- (id)_mapSettings;
- (void)_setMapStyle:(long long)a0;
- (void)_updateMapStyleTrait;
- (void)notificationLayoutGuideDidChange;

@end
