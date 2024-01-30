@class NSString, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface BUManagedRestrictionsProvider : NSObject <MCProfileConnectionObserver, BURestrictionsProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic) BOOL isBookStoreAllowed;
@property (nonatomic) BOOL isExplicitContentAllowed;
@property (nonatomic) BOOL isAccountModificationAllowed;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_currentObserversCopy;
- (void)_uq_notifyObserversForBookStoreRestrictionsChange;
- (void)_uq_notifyObserversForExplicitContentRestrictionsChange;
- (void)_uq_notifyObserversForAccountModificationRestrictionsChange;
- (void)_uq_updateRestrictionsIfNeeded;

@end
