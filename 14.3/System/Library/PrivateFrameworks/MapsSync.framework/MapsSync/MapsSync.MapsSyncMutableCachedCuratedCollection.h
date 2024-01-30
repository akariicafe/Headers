@class NSString, NSData, NSDate;

@interface MapsSync.MapsSyncMutableCachedCuratedCollection : MapsSync.MapsSyncMutableBaseItem {
    void /* unknown type, empty encoding */ _proxy;
}

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long curatedCollectionIdentifier;
@property (nonatomic) BOOL isTombstone;
@property (nonatomic, copy) NSDate *lastFetchedDate;
@property (nonatomic, copy) NSDate *lastSignificantChangeDate;
@property (nonatomic) int placesCount;
@property (nonatomic, copy) NSString *publisherAttribution;
@property (nonatomic, copy) NSString *titleLocale;
@property (nonatomic) int resultProviderIdentifier;

- (id)initWithProxyObject:(id)a0;
- (void).cxx_destruct;

@end
