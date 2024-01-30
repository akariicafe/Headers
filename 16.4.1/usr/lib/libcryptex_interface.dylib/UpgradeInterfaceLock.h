@class NSMutableArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_os_log;

@interface UpgradeInterfaceLock : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *lockConn;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSMutableArray *onNextLockReleaseCallbacks;

+ (id)getSharedInstance;

- (BOOL)isLocked;
- (void)dealloc;
- (int)releaseLock;
- (id)init;
- (void).cxx_destruct;
- (void)_handleXPCMessage:(id)a0;
- (int)_acquireLockOnQueue;
- (id)_createXPCRequest;
- (BOOL)_isLockedOnQueue;
- (void)_onNextLockRelease:(id /* block */)a0;
- (int)acquireLock;

@end
