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
+ (id)collectionWithItems:(id)a0;
+ (id)sortTitlePropertyForGroupingType:(long long)a0;
+ (id)representativePersistentIDPropertyForGroupingType:(long long)a0;
+ (id)artworkCatalogCachePropertiesForGroupingType:(long long)a0;

- (id)initWithItems:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (id)multiverseIdentifier;
- (id)itemsQuery;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (id)initWithItemsQuery:(id)a0;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)artistArtworkCatalog;
- (id)_artworkCatalogRepresentativeItem;
- (id)albumArtistArtworkCatalog;
- (BOOL)isEqual:(id)a0;
- (BOOL)MPSD_hasDownloadableItem;
- (BOOL)MPSD_hasDownloadingItem;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
