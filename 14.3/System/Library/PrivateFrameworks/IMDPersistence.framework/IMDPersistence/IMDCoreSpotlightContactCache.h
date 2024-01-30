@class NSCache;

@interface IMDCoreSpotlightContactCache : NSObject

@property (retain, nonatomic) NSCache *cache;

+ (id)sharedInstance;
+ (id)contactsForVCardAtPath:(id)a0;
+ (id)vCardNameForContact:(id)a0;
+ (id)vCardMapURLForContact:(id)a0;
+ (void)vCardCoordinateForMapURL:(id)a0 outLatitude:(float *)a1 outLongitude:(float *)a2;
+ (void)updateAttributes:(id)a0 withAddressFromContact:(id)a1;

- (void)contactStoreDidChange:(id)a0;
- (void)dealloc;
- (id)cachedContactForKey:(id)a0 cacheHit:(BOOL *)a1;
- (void)cacheContact:(id)a0 forKey:(id)a1;

@end
