@class SBSLockScreenService;

@interface WFCompactUnlockService : NSObject

@property (class, readonly, nonatomic) BOOL isDeviceLocked;

@property (retain, nonatomic) SBSLockScreenService *service;

- (void)dealloc;
- (void).cxx_destruct;
- (void)requestUnlockIfNeeded:(id /* block */)a0;

@end
