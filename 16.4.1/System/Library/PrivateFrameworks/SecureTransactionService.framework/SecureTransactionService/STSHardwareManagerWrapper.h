@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface STSHardwareManagerWrapper : NSObject <NFHardwareEventListener>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (nonatomic) BOOL resolvedHwManagerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)manager;
- (void).cxx_destruct;
- (void)hardwareStateDidChange;

@end
