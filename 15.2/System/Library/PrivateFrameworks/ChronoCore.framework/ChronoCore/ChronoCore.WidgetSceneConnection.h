@class NSString;

@interface ChronoCore.WidgetSceneConnection : NSObject <_UISceneSettingsDiffAction> {
    void /* unknown type, empty encoding */ logIdentifier;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ sceneSettingsDiffInspector;
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ _invalidated;
    void /* unknown type, empty encoding */ _descriptorDidChangeSubscription;
    void /* unknown type, empty encoding */ _needsVCRebuild;
    void /* unknown type, empty encoding */ hasBeenActive;
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ debugOverlayViewController;
    void /* unknown type, empty encoding */ contentViewController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ transaction;
}

@property (nonatomic, readonly) NSString *description;

- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
