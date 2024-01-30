@class SBFUserAuthenticationController, SBSyncController;

@interface SBLockScreenAutoUnlockAggregateRule : SBAutoUnlockComposableRule

@property (retain, nonatomic, getter=_syncController, setter=_setSyncController:) SBSyncController *syncController;
@property (readonly, nonatomic) SBFUserAuthenticationController *userAuthenticationController;

- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (id)_initWithUserAuthenticationController:(id)a0 syncController:(id)a1;
- (void).cxx_destruct;
- (id)initWithUserAuthenticationController:(id)a0;

@end
