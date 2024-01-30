@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _OSDataProtectionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) BOOL deviceFormatedForContentProtection;
@property (readonly, nonatomic) NSMutableDictionary *handlers;
@property (readonly, nonatomic) NSMutableDictionary *availableState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) BOOL notifyEnabled;

+ (id)sharedInstance;

- (BOOL)deviceIsPasswordConfigured;
- (BOOL)deviceHasBeenUnlockedSinceBoot;
- (void)handleKeyBagLockNotification;
- (BOOL)isDataAvailableForClassC;
- (BOOL)isDataAvailableFor:(id)a0;
- (BOOL)isDataAvailableForClassA;
- (BOOL)deviceIsLocked;
- (id)registerStateChangeHandler:(id /* block */)a0;
- (id)init;
- (void)deregisterStateChangeHandler:(id)a0;
- (void).cxx_destruct;

@end
