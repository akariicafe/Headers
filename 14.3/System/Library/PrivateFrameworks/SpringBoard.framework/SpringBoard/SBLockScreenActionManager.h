@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionProviders;

- (id)init;
- (void).cxx_destruct;
- (id)currentLockScreenActionContextActionSource:(unsigned long long *)a0;
- (void)runUnlockAction;
- (void)_clearActionOnAllProviders;
- (void)registerLockScreenActionProvider:(id)a0 forSource:(unsigned long long)a1;
- (id)currentLockScreenActionContext;

@end
