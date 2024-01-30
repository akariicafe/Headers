@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _DPDataProtectionMaster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) BOOL deviceFormatedForContentProtection;
@property (readonly, nonatomic) NSMutableDictionary *handlers;
@property (readonly, nonatomic) NSMutableDictionary *availableState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) BOOL notifyEnabled;

+ (id)sharedInstance;

- (void)deregisterStateChangeHandler:(id)a0;
- (BOOL)deviceIsPasswordConfigured;
- (BOOL)isDataAvailableFor:(id)a0;
- (void).cxx_destruct;
- (BOOL)deviceHasBeenUnlockedSinceBoot;
- (id)init;
- (id)registerStateChangeHandler:(id /* block */)a0;
- (void)dealloc;
- (BOOL)isDataAvailableForClassC;
- (BOOL)deviceIsLocked;
- (BOOL)isDataAvailableForClassA;
- (void)handleKeyBagLockNotification;

@end
