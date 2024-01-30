@class SBApplicationSceneEntity;

@interface SBInProcessSecureAppAction : SBSLockScreenContentAction

@property (retain, nonatomic) SBApplicationSceneEntity *applicationSceneEntity;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 applicationSceneEntity:(id)a1 handler:(id /* block */)a2;
- (BOOL)isInProcessAction;

@end
