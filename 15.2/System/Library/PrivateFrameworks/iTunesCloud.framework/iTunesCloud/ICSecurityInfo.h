@class NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICSecurityInfo : NSObject {
    BOOL _hasLoadedDeviceClassCUnlocked;
    BOOL _hasLoadedContentProtectionEnabled;
    int _firstUnlockNotificationToken;
    NSMutableArray *_pendingFirstUnlockBlocks;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (class, readonly, nonatomic) ICSecurityInfo *sharedSecurityInfo;

@property (readonly, nonatomic, getter=isContentProtectionEnabled) BOOL contentProtectionEnabled;
@property (readonly, nonatomic, getter=isDeviceUnlocked) BOOL deviceUnlocked;
@property (readonly, nonatomic, getter=isDeviceClassCUnlocked) BOOL deviceClassCUnlocked;

- (void).cxx_destruct;
- (void)_loadContentProtectionEnabled:(BOOL)a0 isDeviceClassCUnlocked:(BOOL)a1;
- (id)init;
- (void)performBlockAfterFirstUnlock:(id /* block */)a0;
- (void)dealloc;
- (void)_processFirstUnlockNotification;
- (void)_getContentProtectionEnabled:(BOOL *)a0 isDeviceClassCUnlocked:(BOOL *)a1;

@end
