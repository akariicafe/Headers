@class FBSSceneClientSettings, NSString, _UIKeyboardArbiter, NSObject, FBSScene;
@protocol OS_dispatch_queue;

@interface _UIKeyboardArbiterHost : NSObject <_UIKeyboardArbiterLink> {
    FBSScene *_scene;
    FBSSceneClientSettings *_clientSettings;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *serviceName;
@property (weak, nonatomic) _UIKeyboardArbiter *owner;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)launch;
+ (id)launchAdvisorWithOmniscientDelegate:(id)a0;
+ (id)launchAdvisorWithOmniscientDelegate:(id)a0 sceneDelegate:(id)a1;

- (void)updateSceneSettings;
- (void)attach:(id)a0;
- (void)dealloc;
- (void)connectWithQueue:(id)a0;
- (id)_createSceneWithIdentifier:(id)a0 initialClientSettings:(id)a1;
- (void)createSceneWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)detach:(id)a0;

@end
