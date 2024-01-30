@class CNContactStore, NSArray, NSString, TUCallProviderManager, CNFavorites, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate>

@property (readonly, nonatomic) NSCache *contactCache;
@property (readonly, nonatomic) NSCache *transportNameCache;
@property (readonly, nonatomic) TUCallProviderManager *callProviderManager;
@property (readonly, nonatomic) CNFavorites *favoritesManager;
@property (readonly, nonatomic) unsigned long long prefetchCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (copy, nonatomic) NSArray *favoritesEntries;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchContactForFavoritesEntry:(id)a0 keyDescriptors:(id)a1;
- (id)init;
- (id)fetchContactForFavoritesEntry:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)transportNameForFavoritesEntry:(id)a0;
- (id)fetchFavoritesEntries;
- (void)moveEntryAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)contactForFavoritesEntry:(id)a0 keyDescriptors:(id)a1;
- (id)fetchTransportNameForFavoritesEntry:(id)a0;
- (BOOL)canAddEntry;
- (void)providersChangedForProviderManager:(id)a0;
- (void)removeEntriesAtIndexes:(id)a0;
- (id)contactForFavoritesEntry:(id)a0;
- (unsigned long long)absoluteIndexForIndex:(unsigned long long)a0;
- (id)contactCacheKeyForFavoritesEntry:(id)a0;
- (void)handleContactsFavoritesDidChangeNotification:(id)a0;
- (id)transportNameCacheKeyForFavoritesEntry:(id)a0;
- (id)addEntry:(id)a0;
- (id)initWithContactStore:(id)a0 prefetchCount:(unsigned long long)a1;

@end
