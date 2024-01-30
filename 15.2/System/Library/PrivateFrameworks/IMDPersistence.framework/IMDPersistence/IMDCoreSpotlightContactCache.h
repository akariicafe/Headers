@class NSCache, NSData;

@interface IMDCoreSpotlightContactCache : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSData *currentHistoryToken;

+ (id)sharedInstance;
+ (void)updateAttributes:(id)a0 withAddressFromContact:(id)a1;
+ (id)contactsForVCardAtPath:(id)a0;
+ (void)vCardCoordinateForMapURL:(id)a0 outLatitude:(float *)a1 outLongitude:(float *)a2;
+ (id)vCardMapURLForContact:(id)a0;
+ (id)vCardNameForContact:(id)a0;

- (void)removeCachedContactForKey:(id)a0;
- (void)updateCacheForAliases:(id)a0;
- (void)cacheContact:(id)a0 forKey:(id)a1;
- (id)init;
- (id)cachedContactForKey:(id)a0;
- (void)cacheContactsFromFetchResults:(id)a0 forAliases:(id)a1;
- (void)dealloc;
- (id)_handlesMatchingContactIdentifier:(id)a0;
- (void)contactStoreDidChange:(id)a0;
- (void)resetCache;

@end
