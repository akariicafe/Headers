@class NSString, NSSet, NSMutableDictionary, NSMutableArray;

@interface SKUIItemList : NSObject <SKUICacheCoding, NSCopying>

@property (copy, nonatomic) NSMutableArray *items;
@property (copy, nonatomic) NSString *seeAllTitle;
@property (copy, nonatomic) NSString *seeAllURLString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSSet *unavailableItemIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCacheRepresentation:(id)a0;
- (void)addItems:(id)a0;
- (void)removeItemsAtIndexes:(id)a0;
- (BOOL)isUnavailableItemIdentifier:(id)a0;

@end
