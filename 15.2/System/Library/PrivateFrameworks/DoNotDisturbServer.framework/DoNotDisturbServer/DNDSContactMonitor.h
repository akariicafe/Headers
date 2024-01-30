@class CNContactStore, NSString, NSHashTable, NSObject;
@protocol DNDSContactProviding, OS_dispatch_queue;

@interface DNDSContactMonitor : NSObject <DNDSContactMonitoring> {
    CNContactStore *_contactStore;
    NSHashTable *_listeners;
    id<DNDSContactProviding> _contactProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_fetchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeListener:(id)a0;
- (id)initWithContactStore:(id)a0 contactProvider:(id)a1;
- (void)_fetchContactsForMonitoredContacts:(id)a0 handler:(id /* block */)a1;
- (BOOL)_fetchContactHistoryWithToken:(id)a0 monitoredContacts:(id)a1 handler:(id /* block */)a2;
- (void)addListener:(id)a0;
- (id)_lock_monitoredContactsByContactHistoryToken;
- (void).cxx_destruct;
- (void)_queue_fetchUpdatesWithContactHistoryToken:(id)a0 monitoredContacts:(id)a1 handler:(id /* block */)a2;
- (void)_contactStoreChanged:(id)a0;
- (void)_updateContactsWithIdentifiers;
- (id)_contactsWithCNContacts:(id)a0;
- (void)_updateContactsWithoutIdentifiers;
- (void)_fetchUpdatesWithContactHistoryToken:(id)a0 monitoredContacts:(id)a1 handler:(id /* block */)a2;
- (id)_lock_listenersByContactHistoryToken;

@end
