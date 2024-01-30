@class MPMediaItem, MPMediaQuery, MPConcreteMediaEntityPropertiesCache;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCopying, MPCacheableConcreteMediaEntity> {
    long long _identifier;
    MPMediaQuery *_itemsQuery;
    long long _grouping;
    MPMediaItem *_representativeItem;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
}

@property (readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

+ (id)createUncachedMediaItemCollectionWithIdentifier:(long long)a0 valuesForProperties:(id)a1 itemsQuery:(id)a2 grouping:(long long)a3 representativeItemIdentifier:(long long)a4;
+ (BOOL)supportsSecureCoding;

- (id)mediaLibrary;
- (id)_initWithIdentifier:(long long)a0 valuesForProperties:(id)a1 itemsQuery:(id)a2 grouping:(long long)a3 representativeItemIdentifier:(long long)a4 propertiesCache:(id)a5;
- (void)encodeWithCoder:(id)a0;
- (id)valueForProperty:(id)a0;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)representativeItem;
- (id)initWithCoder:(id)a0;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemsQuery;
- (unsigned long long)count;
- (id)valuesForProperties:(id)a0;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (long long)groupingType;
- (unsigned long long)persistentID;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)items;
- (void)invalidateCachedProperties;
- (id)initWithIdentifier:(long long)a0 valuesForProperties:(id)a1 itemsQuery:(id)a2 grouping:(long long)a3 representativeItemIdentifier:(long long)a4;
- (id)initWithIdentifier:(long long)a0 itemsQuery:(id)a1 grouping:(long long)a2;

@end
