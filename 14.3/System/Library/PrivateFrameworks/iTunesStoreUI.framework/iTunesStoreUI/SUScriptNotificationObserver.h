@class NSLock;

@interface SUScriptNotificationObserver : NSObject {
    NSLock *_lock;
    struct __CFSet { } *_receivers;
}

- (id)init;
- (void)dealloc;
- (void)_accessibilityPerformEscape;
- (void)_subscriptionStatusDidChangeNotification:(id)a0;
- (void)_restrictionsChangedNotification:(id)a0;
- (void)_purchaseRequestDidSucceedNotification:(id)a0;
- (void)_memoryWarningNotification:(id)a0;
- (void)addEventReceiver:(id)a0;
- (void)removeEventReceiver:(id)a0;
- (void)_endObservingNotifications;
- (void)_beginObservingNotifications;
- (void)_dispatchEvent:(id)a0 forName:(id)a1;
- (void)_dispatchEventWithDictionary:(id)a0 forName:(id)a1;
- (id)_safariQueryDictionaryFromURL:(id)a0;
- (void)_dispatchSafariEventWithDictionary:(id)a0 andIdentifier:(id)a1;
- (void)_enumerateReceiversUsingBlock:(id /* block */)a0;
- (void)_networkTypeChangedNotification:(id)a0;
- (void)_audioSessionsChangedNotification:(id)a0;
- (void)_storeBagDidChangeNotification:(id)a0;
- (void)_safariViewControllerDataUpdate:(id)a0;
- (void)_softwareMapChangedNotification:(id)a0;
- (void)_accessibilityPerformScrollUp;
- (void)_accessibilityPerformScrollDown;
- (void)_accessibilityPerformScrollLeft;
- (void)_accessibilityPerformScrollRight;

@end
