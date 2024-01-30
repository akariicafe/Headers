@class NSString, NSArray;

@interface MPSectionedCollection : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray *_sectionedItems;
    NSArray *_sections;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id firstSection;
@property (readonly, nonatomic) id lastSection;
@property (readonly, nonatomic) id firstItem;
@property (readonly, nonatomic) id lastItem;
@property (readonly, nonatomic) long long totalItemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiersForItemAtIndexPath:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)sectionAtIndex:(long long)a0;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)_stateDumpObject;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)changeDetailsToSectionedCollection:(id)a0 isEqualBlock:(id /* block */)a1 isUpdatedBlock:(id /* block */)a2;
- (BOOL)hasSameContentAsSectionedCollection:(id)a0;
- (long long)globalIndexForIndexPath:(id)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)indexPathForGlobalIndex:(long long)a0;
- (void)enumerateItemIdentifiersUsingBlock:(id /* block */)a0;
- (id)itemsInSectionAtIndex:(long long)a0;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)itemAtIndexPath:(id)a0;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateItemsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateSectionIdentifiersUsingBlock:(id /* block */)a0;
- (id)changeDetailsToSectionedCollection:(id)a0 applyingUIKitWorkarounds:(BOOL)a1 isEqualBlock:(id /* block */)a2 isUpdatedBlock:(id /* block */)a3;
- (void)_initializeAsEmptySectionedCollection;
- (void)encodeWithCoder:(id)a0;
- (id)allSections;

@end
