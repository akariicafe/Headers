@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionProviders;

- (id)currentLockScreenActionContextActionSource:(unsigned long long *)a0;
- (void)runUnlockAction;
- (id)currentLockScreenActionContext;
- (void)_clearActionOnAllProviders;
- (id)init;
- (void)registerLockScreenActionProvider:(id)a0 forSource:(unsigned long long)a1;
- (void).cxx_destruct;

@end
