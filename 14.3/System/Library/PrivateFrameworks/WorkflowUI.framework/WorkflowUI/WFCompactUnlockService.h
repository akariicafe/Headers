@class SBSLockScreenService;

@interface WFCompactUnlockService : NSObject

@property (retain, nonatomic) SBSLockScreenService *service;

- (void).cxx_destruct;
- (void)dealloc;
- (void)requestUnlockIfNeeded:(id /* block */)a0;

@end
