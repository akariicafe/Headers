@class _MPLazySectionedCollectionStorage;
@protocol MPLazySectionedCollectionDataSource;

@interface MPLazySectionedCollection : MPSectionedCollection {
    _MPLazySectionedCollectionStorage *_storage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mapLock;
}

@property (retain, nonatomic) id<MPLazySectionedCollectionDataSource> dataSource;

+ (BOOL)supportsSecureCoding;

- (id)initWithDataSource:(id)a0;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (void)enumerateItemsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (id)firstSection;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)itemsInSectionAtIndex:(long long)a0;
- (BOOL)hasSameContentAsSectionedCollection:(id)a0;
- (id)lastSection;
- (void).cxx_destruct;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)firstItem;
- (void)_updateCacheWithObject:(id)a0 atIndexPath:(id)a1;
- (id)_cachedObjectAtIndexPath:(id)a0;
- (id)lastItem;
- (id)allSections;
- (void)dealloc;
- (id)identifiersForItemAtIndexPath:(id)a0;

@end
