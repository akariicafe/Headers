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

- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)dealloc;
- (void)_registerFirstUnlockNotifyToken;
- (void)_updateUnlockedSinceBootStatus;
- (void)_handleFirstUnlockNotification;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_cancelFirstUnlockNotifyToken;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;

@end
