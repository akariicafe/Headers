@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionProviders;

- (void)_clearActionOnAllProviders;
- (id)currentLockScreenActionContextActionSource:(unsigned long long *)a0;
- (void)runUnlockAction;
- (void).cxx_destruct;
- (id)init;
- (void)registerLockScreenActionProvider:(id)a0 forSource:(unsigned long long)a1;
- (id)currentLockScreenActionContext;

@end
