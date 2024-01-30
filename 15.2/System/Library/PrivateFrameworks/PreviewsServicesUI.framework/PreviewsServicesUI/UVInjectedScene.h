@class FBScene, NSString, UIWindowScene;

@interface UVInjectedScene : NSObject <FBSceneDelegate, _UISceneSettingsDiffAction> {
    BOOL _invalidated;
    UIWindowScene *_parentScene;
    BOOL _maximized;
    struct CGSize { double width; double height; } _overrideSceneSize;
    struct CGSize { double width; double height; } _overrideMaximumSize;
}

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sceneSize;
@property (copy, nonatomic) id /* block */ sceneResizeHandler;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_baseSceneSettings:(id)a0;
+ (id)injectInRunningTarget:(id)a0 error:(id *)a1;

- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)sendAction:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)_setParentScene:(id)a0;
- (void)_handleActionsFromHostedScene:(id)a0;
- (id)_computeSceneSettingsUsing:(id)a0 error:(id *)a1;
- (void)_updateSceneSettings:(id)a0 transitionContext:(id)a1;
- (BOOL)_computeAndUpdateSceneSettings:(id *)a0;
- (id)_initWithScene:(id)a0 forBundleID:(id)a1;
- (BOOL)setMaximizedWithParent:(id)a0 error:(id *)a1;
- (BOOL)setMinimizedWithParent:(id)a0 size:(struct CGSize { double x0; double x1; })a1 maximumSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;

@end
