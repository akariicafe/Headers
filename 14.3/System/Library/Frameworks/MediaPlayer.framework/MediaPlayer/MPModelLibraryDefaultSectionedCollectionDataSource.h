@class NSString, NSDictionary, MPModelLibraryRequest, MPMediaLibraryEntityTranslationContext;

@interface MPModelLibraryDefaultSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    struct vector<long long, std::__1::allocator<long long> > { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *__value_; } __end_cap_; } _allowedItemPersistentIDs;
    struct map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long> > > { struct __tree<std::__1::__value_type<long long, unsigned long>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _allowedItemPersistentIDToItemQueryResultsIndexMap;
}

@property (retain, nonatomic) NSDictionary *indexPathToContainerUniqueIDMap;
@property (readonly, nonatomic) struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > { struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > *__ptr_; struct __shared_weak_count *__cntrl_; } itemIdentifierQueryResults;
@property (readonly, nonatomic) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *__ptr_; struct __shared_weak_count *__cntrl_; } itemQueryResults;
@property (readonly, nonatomic) MPModelLibraryRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiersForItemAtIndexPath:(id)a0;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_populateIndexMap;
- (unsigned long long)_adjustedGlobalIndexForIndexPath:(id)a0;
- (BOOL)hasSameContentAsDataSource:(id)a0;
- (BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)a0;
- (id)_buildIndexPathToContainerUniqueIDMapFromItemQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_usesSections;
- (id).cxx_construct;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)itemAtIndexPath:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })optionalSectionIndexTitlesRange;
- (id)sectionIndexTitles;
- (id)initWithRequest:(id)a0 itemQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *x0; struct __shared_weak_count *x1; })a1 itemIdentifierQueryResults:(struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > { struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > *x0; struct __shared_weak_count *x1; })a2;

@end
