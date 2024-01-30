@class NSString, SBWindowSceneStatusBarAssertionManager, SBStatusBarSettings, NSDate;

@interface SBWindowSceneStatusBarSettingsAssertion : NSObject <BSDescriptionProviding, SBWindowSceneStatusBarAssertion>

@property (readonly, weak, nonatomic) SBWindowSceneStatusBarAssertionManager *assertionManager;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, copy, nonatomic) SBStatusBarSettings *settings;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *reason;

- (void)acquire;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)modifySettingsWithBlock:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (void)acquireWithAnimationParameters:(id)a0;
- (id)_initWithWindowSceneStatusBarAssertionManager:(id)a0 settings:(id)a1 atLevel:(unsigned long long)a2 reason:(id)a3;
- (void)dealloc;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (id)_initWithWindowSceneStatusBarAssertionManager:(id)a0 statusBarHidden:(BOOL)a1 atLevel:(unsigned long long)a2 reason:(id)a3;
- (void).cxx_destruct;
- (void)modifySettingsWithBlock:(id /* block */)a0 animationParameters:(id)a1;
- (void)invalidateWithAnimationParameters:(id)a0;

@end
