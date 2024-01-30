@class NSString, SBFLockScreenActionContext;

@interface CSSimpleLockScreenActionProvider : NSObject <SBLockScreenActionProvider>

@property (retain, nonatomic) SBFLockScreenActionContext *lockScreenActionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidateLockScreenActionContext;

@end
