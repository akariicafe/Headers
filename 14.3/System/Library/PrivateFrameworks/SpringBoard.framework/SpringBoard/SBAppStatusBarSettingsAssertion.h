@class SBAppStatusBarSettings, NSString, NSDate;

@interface SBAppStatusBarSettingsAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>

@property (readonly, nonatomic) unsigned long long level;
@property (readonly, copy, nonatomic) SBAppStatusBarSettings *settings;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStatusBarHidden:(BOOL)a0 atLevel:(unsigned long long)a1 reason:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)modifySettingsWithBlock:(id /* block */)a0 animationParameters:(id)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)acquireWithAnimationParameters:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)modifySettingsWithBlock:(id /* block */)a0;
- (void)acquire;
- (id)initWithSettings:(id)a0 atLevel:(unsigned long long)a1 reason:(id)a2;
- (void)invalidateWithAnimationParameters:(id)a0;
- (void)invalidate;

@end
