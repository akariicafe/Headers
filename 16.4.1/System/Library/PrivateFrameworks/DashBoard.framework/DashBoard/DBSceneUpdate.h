@class DBApplicationInfo, NSDictionary, UIMutableCarPlayApplicationSceneSettings, UIApplicationSceneTransitionContext, FBApplicationUpdateScenesTransaction, UIApplicationStarkSceneSpecification;
@protocol DBEnvironment;

@interface DBSceneUpdate : NSObject

@property (retain, nonatomic) DBApplicationInfo *applicationInfo;
@property (retain, nonatomic) DBApplicationInfo *proxyApplicationInfo;
@property (weak, nonatomic) id<DBEnvironment> environment;
@property (retain, nonatomic) UIApplicationStarkSceneSpecification *sceneSpecification;
@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction;
@property (retain, nonatomic) NSDictionary *activationSettings;
@property (readonly, nonatomic) UIMutableCarPlayApplicationSceneSettings *settings;
@property (readonly, nonatomic) UIApplicationSceneTransitionContext *transitionContext;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsets;
- (long long)_uiStyle;
- (long long)_mapStyle;
- (id)_effectiveSceneAppInfo;
- (void)_postTransactionUpdateSceneSettingsForScene:(id)a0;
- (id)initWithApplicationInfo:(id)a0 environment:(id)a1;
- (id)initWithApplicationInfo:(id)a0 proxyApplicationInfo:(id)a1 environment:(id)a2 activationSettings:(id)a3;
- (void)performUpdateWithCompletion:(id /* block */)a0;

@end
