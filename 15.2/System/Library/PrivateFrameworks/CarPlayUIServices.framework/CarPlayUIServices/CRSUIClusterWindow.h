@class CRSUIInstrumentClusterSettingsDiffInspector, NSString, CARObserverHashTable;

@interface CRSUIClusterWindow : CRSUIWindow <CRSUIClusterZoomActionDelegate, _UISceneSettingsDiffAction>

@property (retain, nonatomic) CARObserverHashTable *observers;
@property (retain, nonatomic) CRSUIInstrumentClusterSettingsDiffInspector *clusterSettingsDiffInspector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (unsigned long long)itemType;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void).cxx_destruct;
- (unsigned long long)compassSetting;
- (unsigned long long)speedLimitSetting;
- (id)_clusterSettings;
- (void)handleZoomInDirection:(long long)a0;
- (unsigned long long)etaSetting;
- (void)addClusterSettingsObserver:(id)a0;
- (void)removeClusterSettingsObserver:(id)a0;

@end
