@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BUUserAccountMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (retain, nonatomic) NSMutableDictionary *notifyBlocks;
@property (retain, nonatomic) NSMutableDictionary *observerHashTables;
@property (retain, nonatomic) NSMutableDictionary *accountIdentifiers;

+ (id)sharedInstance;

- (void)_unregisterNotificationForAccountType:(unsigned long long)a0;
- (void)nq_teardownNotificationForAccountType:(unsigned long long)a0;
- (long long)_removeObserver:(id)a0 forAccountType:(unsigned long long)a1;
- (void)_didReceiveNotification:(id)a0;
- (void)nq_updateAccountIdentifierAndNotifyObserversForAccountType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_singleAccountTypeForNotification:(id)a0;
- (void)removeObserver:(id)a0 accountTypes:(unsigned long long)a1;
- (void)nq_setupNotificationForAccountType:(unsigned long long)a0 currentAccountIdentifier:(id)a1;
- (void)nq_updateiCloudAccountIdentifierAndNotifyObservers;
- (void)addObserver:(id)a0 accountTypes:(unsigned long long)a1;
- (id)_observersForAccountType:(unsigned long long)a0;
- (void)nq_updateiTunesAccountIdentifierAndNotifyObservers;
- (long long)_addObserver:(id)a0 forAccountType:(unsigned long long)a1;
- (void)_registerNotificationForAccountType:(unsigned long long)a0;
- (long long)_observerCountForAccountType:(unsigned long long)a0;

@end
