@class CNContactStore, EFLazyCache;

@interface _EMContactsCache : NSObject

@property (readonly, weak, nonatomic) CNContactStore *store;
@property (readonly, nonatomic) EFLazyCache *addressesCache;
@property (readonly, nonatomic) EFLazyCache *namesCache;

- (id)initWithStore:(id)a0;
- (void)_contactsChanged:(id)a0;
- (void).cxx_destruct;
- (id)_contactsForKey:(id)a0 cache:(id)a1 keysToFetch:(id)a2 predicateBlock:(id /* block */)a3 error:(id *)a4;
- (id)allContactEmailAddressesWithError:(id *)a0;
- (id)contactsForEmailAddress:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (id)contactsForName:(id)a0 keysToFetch:(id)a1 error:(id *)a2;

@end
