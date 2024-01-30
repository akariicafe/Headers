@class NSString, MPModelLibraryRequest, MPMediaLibraryEntityTranslationContext;

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    MPMediaLibraryEntityTranslationContext *_itemTranslationContext;
    MPMediaLibraryEntityTranslationContext *_sectionTranslationContext;
    struct vector<long long, std::__1::allocator<long long> > { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *__value_; } __end_cap_; } _allowedSectionPersistentIDs;
    struct map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long> > > { struct __tree<std::__1::__value_type<long long, unsigned long>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _allowedSectionPersistentIDToSectionQueryResultsIndexMap;
}

@property (readonly, nonatomic) struct shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > > { struct map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > *__ptr_; struct __shared_weak_count *__cntrl_; } itemEntityQueryResults;
@property (readonly, nonatomic) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *__ptr_; struct __shared_weak_count *__cntrl_; } sectionEntityQueryResult;
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
- (BOOL)hasSameContentAsDataSource:(id)a0;
- (BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id).cxx_construct;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)initWithRequest:(id)a0 sectionQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *x0; struct __shared_weak_count *x1; })a1 itemQueryResults:(struct map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > { struct __tree<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> >, std::__1::less<long long>, true> > { unsigned long long x0; } x2; } x0; } *)a2;
- (unsigned long long)_adjustedIndexForSectionIndex:(long long)a0;
- (id)itemAtIndexPath:(id)a0;

@end
