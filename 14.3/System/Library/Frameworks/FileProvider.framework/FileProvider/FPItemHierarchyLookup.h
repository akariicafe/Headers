@class NSCache, FPItem;
@protocol FPItemHierarchyLookingUp;

@interface FPItemHierarchyLookup : NSObject {
    FPItem *_item;
}

@property (retain, nonatomic) NSCache *parentHierarchyItems;
@property (weak) id<FPItemHierarchyLookingUp> hierarchyServicer;

- (id)initWithItem:(id)a0 parentHierarchyItems:(id)a1 hierarchyServicer:(id)a2;
- (void).cxx_destruct;
- (id)_fetchItemWithID:(id)a0;
- (id)valueForKeyPath:(id)a0;

@end
