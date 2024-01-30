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

- (void)_registerFirstUnlockNotifyToken;
- (void)_assertRunningOnAccessQueue;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)dealloc;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_assertNotRunningOnAccessQueue;
- (void)_updateUnlockedSinceBootStatus;
- (void)_cancelFirstUnlockNotifyToken;
- (void)_loadContentProtectionStatusIfNeeded;
- (id)init;
- (void)_handleFirstUnlockNotification;
- (void).cxx_destruct;

@end
