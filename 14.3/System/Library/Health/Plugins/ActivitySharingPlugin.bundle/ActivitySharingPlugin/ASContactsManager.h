@class CNContactStore, NSSet, NSString, NSMutableDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface ASContactsManager : NSObject <ASActivitySharingManagerReadyObserver> {
    CNContactStore *_contactStore;
    NSMutableDictionary *_contactsByUUID;
    NSMutableDictionary *_placeholderContactsByUUID;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_contactsQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_persistQueue;
    NSObject<OS_dispatch_group> *_contactsTransactionBarrier;
}

@property (copy, nonatomic) NSSet *contacts;
@property (readonly, nonatomic) NSSet *placeholderContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_endTransaction;
- (void)addObserver:(id)a0;
- (void)_beginTransaction;
- (void)_queue_notifyObservers;
- (void)removePlaceholderContactWithToken:(id)a0;
- (id)contactWithUUID:(id)a0;
- (void)saveContact:(id)a0;
- (id)contactWithDestinations:(id)a0;
- (id)createContactWithDestinations:(id)a0;
- (id)savePlaceholderContact:(id)a0;
- (id)contactMatchingCriteriaBlock:(id /* block */)a0;
- (id)placeholderContactWithUUID:(id)a0;
- (void)setContactsUsingTransaction:(id /* block */)a0;
- (void)removeAllPlaceholderContacts;
- (void)loadCachedContacts;
- (id)_contactStoreContactWithIdentifier:(id)a0;
- (id)_queue_allContacts;
- (void)_setContacts:(id)a0 waitForTransaction:(BOOL)a1;
- (id)_findMatchingContactStoreContactForDestinations:(id)a0;
- (void)_waitForTransaction;
- (void)_persistContacts:(id)a0;

@end
