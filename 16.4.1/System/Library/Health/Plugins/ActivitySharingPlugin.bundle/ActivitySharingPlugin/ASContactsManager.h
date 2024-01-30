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

- (id)initWithIsWatch:(BOOL)a0;
- (void)_endTransaction;
- (void)loadCachedContacts;
- (void)_queue_notifyObservers;
- (id)_contactStoreContactWithIdentifier:(id)a0;
- (id)placeholderContactWithUUID:(id)a0;
- (void)addObserver:(id)a0;
- (id)contactMatchingCriteriaBlock:(id /* block */)a0;
- (id)contactWithDestinations:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_persistContacts:(id)a0;
- (void)removePlaceholderContactWithToken:(id)a0;
- (id)contactWithUUID:(id)a0;
- (void)_waitForTransaction;
- (void)_beginTransaction;
- (void)removeAllPlaceholderContacts;
- (id)_findMatchingContactStoreContactForDestinations:(id)a0;
- (void)_setContacts:(id)a0 waitForTransaction:(BOOL)a1;
- (void)saveContact:(id)a0;
- (void)setContactsUsingTransaction:(id /* block */)a0;
- (id)createContactWithDestinations:(id)a0;
- (id)_queue_allContacts;
- (id)savePlaceholderContact:(id)a0;
- (void).cxx_destruct;

@end
