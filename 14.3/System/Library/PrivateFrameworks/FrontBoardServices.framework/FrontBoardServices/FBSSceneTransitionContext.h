@class NSString, FBWatchdogTransitionContext, NSSet, FBSceneUpdateContext, BKSAnimationFenceHandle, BSProcessHandle, BSAnimationSettings, BSMutableSettings;

@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying> {
    FBSceneUpdateContext *_updateContext;
    FBWatchdogTransitionContext *_watchdogTransitionContext;
    BOOL _allowCPUThrottling;
    BSMutableSettings *_otherSettings;
    BSMutableSettings *_transientLocalClientSettings;
}

@property (retain, nonatomic) FBSceneUpdateContext *updateContext;
@property (retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (copy, nonatomic) BSAnimationSettings *animationSettings;
@property (retain, nonatomic) BKSAnimationFenceHandle *animationFence;
@property (copy, nonatomic) NSSet *actions;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionContext;

- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (BOOL)_isEmpty;
- (id)initWithXPCDictionary:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)transientLocalClientSettings;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)settings:(id)a0 appendDescriptionToBuilder:(id)a1 forFlag:(long long)a2 object:(id)a3 ofSetting:(unsigned long long)a4;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)appendDescriptionToBuilder:(id)a0 forFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)otherSettings;

@end
