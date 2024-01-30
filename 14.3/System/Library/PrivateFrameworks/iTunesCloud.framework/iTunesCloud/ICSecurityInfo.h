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

@property (class, readonly) ICSecurityInfo *sharedSecurityInfo;

@property (readonly, nonatomic, getter=isContentProtectionEnabled) BOOL contentProtectionEnabled;
@property (readonly, nonatomic, getter=isDeviceUnlocked) BOOL deviceUnlocked;
@property (readonly, nonatomic, getter=isDeviceClassCUnlocked) BOOL deviceClassCUnlocked;

- (id)init;
- (void).cxx_destruct;
- (void)performBlockAfterFirstUnlock:(id /* block */)a0;
- (void)dealloc;
- (void)_loadContentProtectionEnabled:(BOOL)a0 isDeviceClassCUnlocked:(BOOL)a1;
- (void)_getContentProtectionEnabled:(BOOL *)a0 isDeviceClassCUnlocked:(BOOL *)a1;
- (void)_processFirstUnlockNotification;

@end
