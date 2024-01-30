@class NSSet, NSMutableSet;

@interface HFAbstractGroupedStatusItem : HFStatusItem

@property (retain, nonatomic) NSMutableSet *allItems;
@property (retain, nonatomic) NSSet *displayedItems;
@property (readonly, nonatomic) NSSet *items;

+ (id)sortKey;
+ (id)statusItemClasses;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)shouldEncapsulateItem:(id)a0;
- (BOOL)_hasRequiredStatusItems;
- (id)_statusItemOfClass:(Class)a0;

@end
