@class NSArray, MPMediaItem, MPMediaQuery;

@interface MPMediaItemCollection : MPMediaEntity {
    unsigned long long _containedMediaTypes;
    BOOL _initializedContainedMediaTypes;
    NSArray *_items;
    unsigned long long _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}

@property (readonly, nonatomic) long long groupingType;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) MPMediaItem *representativeItem;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long mediaTypes;

+ (BOOL)supportsSecureCoding;
+ (id)titlePropertyForGroupingType:(long long)a0;
+ (id)artworkCatalogCachePropertiesForGroupingType:(long long)a0;
+ (id)collectionWithItems:(id)a0;
+ (id)representativePersistentIDPropertyForGroupingType:(long long)a0;
+ (id)sortTitlePropertyForGroupingType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithItems:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)MPSD_hasDownloadingItem;
- (id)_artworkCatalogRepresentativeItem;
- (id)albumArtistArtworkCatalog;
- (id)artistArtworkCatalog;
- (id)artworkCatalog;
- (id)initWithItemsQuery:(id)a0;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (id)itemsQuery;
- (id)multiverseIdentifier;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;

@end
