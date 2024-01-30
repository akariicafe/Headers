@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    long long _contentProtectionStatus;
    long long _unlockedSinceBootStatus;
    int _firstUnlockNotifyToken;
}

@property (class, readonly) TLContentProtectionStateObserver *sharedContentProtectionStateObserver;

- (void)_handleFirstUnlockNotification;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_cancelFirstUnlockNotifyToken;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)_updateUnlockedSinceBootStatus;
- (void).cxx_destruct;
- (id)init;
- (void)_assertRunningOnAccessQueue;
- (void)_registerFirstUnlockNotifyToken;
- (void)dealloc;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_assertNotRunningOnAccessQueue;

@end
