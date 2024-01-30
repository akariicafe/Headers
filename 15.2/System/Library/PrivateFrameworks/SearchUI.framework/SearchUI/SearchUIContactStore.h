@class CNContactStore, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface SearchUIContactStore : NSObject <SearchUIBatchedCachePrewarmer>

@property (retain, nonatomic) NSCache *contactCache;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contactFetchingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeholderContact;
+ (id)sharedStore;
+ (id)contactForPhoneNumber:(id)a0 email:(id)a1;
+ (id)resultTableContactDescriptorKeys;
+ (id)viewControllerDescriptorKeys;

- (id)batchingItemsForRowModel:(id)a0;
- (void)fetchContactsForIdentifiers:(id)a0 withKeyDescriptors:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchContactForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)prewarmCacheForBatchedItems:(id)a0;
- (id)cachedContactsForIdentifiers:(id)a0 withKeyDescriptors:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)cachedContactForIdentifier:(id)a0;
- (void)fetchContactsForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)contactsForIdentifiers:(id)a0 withKeys:(id)a1;
- (id)contactForIdentifier:(id)a0;

@end
