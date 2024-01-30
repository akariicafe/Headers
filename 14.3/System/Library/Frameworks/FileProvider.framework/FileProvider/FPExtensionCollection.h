@class FPExtensionEnumerationSettings, FPItemID;

@interface FPExtensionCollection : FPItemCollection {
    FPItemID *_alternateID;
}

@property (copy) FPExtensionEnumerationSettings *settings;

+ (BOOL)item:(id)a0 isValidForObservedItemID:(id)a1;
+ (BOOL)_item:(id)a0 isCollectionRootForObservedItemID:(id)a1;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isRootItem:(id)a0;
- (id)enumeratedItemID;
- (void)updateRootItem:(id)a0;
- (id)scopedSearchQuery;
- (BOOL)isCollectionValidForItem:(id)a0;
- (id)createDataSourceWithSortDescriptors:(id)a0;

@end
