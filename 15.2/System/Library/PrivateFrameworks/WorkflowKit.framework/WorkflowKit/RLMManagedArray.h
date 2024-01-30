@class NSString, RLMRealm;

@interface RLMManagedArray : RLMArray <RLMThreadConfined_Private, RLMFastEnumerable> {
    struct List { struct shared_ptr<realm::Realm> { struct Realm *__ptr_; struct __shared_weak_count *__cntrl_; } m_realm; struct ObjectSchema *m_object_schema; struct shared_ptr<realm::LinkView> { struct LinkView *__ptr_; struct __shared_weak_count *__cntrl_; } m_link_view; struct BasicTableRef<realm::Table> { struct Table *m_ptr; } m_table; struct Handle<realm::_impl::CollectionNotifier> { struct CollectionNotifier *__ptr_; struct __shared_weak_count *__cntrl_; } m_notifier; } _backingList;
    RLMRealm *_realm;
    void *_objectInfo;
    void *_ownerInfo;
    struct unique_ptr<RLMObservationInfo, std::default_delete<RLMObservationInfo>> { struct __compressed_pair<RLMObservationInfo *, std::default_delete<RLMObservationInfo>> { struct RLMObservationInfo *__value_; } __ptr_; } _observationInfo;
}

@property (readonly, nonatomic) id objectiveCMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RLMRealm *realm;
@property (readonly, nonatomic) void *objectInfo;
@property (readonly, nonatomic) unsigned long long count;

+ (id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::default_delete<realm::ThreadSafeReferenceBase>> { struct ThreadSafeReferenceBase *x0; } x0; })a0 metadata:(id)a1 realm:(id)a2;

- (void)removeObjectsAtIndexes:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (struct TableView { void /* function */ **x0; struct Column<long long> { void /* function */ **x0; unsigned long long x1; struct unique_ptr<realm::StringIndex, std::default_delete<realm::StringIndex>> { struct __compressed_pair<realm::StringIndex *, std::default_delete<realm::StringIndex>> { struct StringIndex *x0; } x0; } x2; struct BpTree<long long> { struct unique_ptr<realm::Array, std::default_delete<realm::Array>> { struct __compressed_pair<realm::Array *, std::default_delete<realm::Array>> { struct Array *x0; } x0; } x0; } x3; } x1; unsigned long long x2; unsigned long long x3; struct BasicTableRef<realm::Table> { struct Table *x0; } x4; struct BacklinkColumn *x5; struct BasicRow<const realm::Table> { struct BasicTableRef<realm::Table> { struct Table *x0; } x0; unsigned long long x1; struct RowBase *x2; struct RowBase *x3; } x6; struct shared_ptr<const realm::LinkView> { struct LinkView *x0; struct __shared_weak_count *x1; } x7; unsigned long long x8; struct DescriptorOrdering { struct vector<std::unique_ptr<realm::BaseDescriptor>, std::allocator<std::unique_ptr<realm::BaseDescriptor>>> { void *x0; void *x1; struct __compressed_pair<std::unique_ptr<realm::BaseDescriptor> *, std::allocator<std::unique_ptr<realm::BaseDescriptor>>> { void *x0; } x2; } x0; } x9; struct Query { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct vector<realm::QueryGroup, std::allocator<realm::QueryGroup>> { struct QueryGroup *x0; struct QueryGroup *x1; struct __compressed_pair<realm::QueryGroup *, std::allocator<realm::QueryGroup>> { struct QueryGroup *x0; } x2; } x1; struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x2; struct shared_ptr<const realm::Descriptor> { struct Descriptor *x0; struct __shared_weak_count *x1; } x3; struct BasicTableRef<realm::Table> { struct Table *x0; } x4; struct RowIndexes *x5; struct shared_ptr<realm::LinkView> { struct LinkView *x0; struct __shared_weak_count *x1; } x6; struct TableViewBase *x7; struct unique_ptr<realm::TableViewBase, std::default_delete<realm::TableViewBase>> { struct __compressed_pair<realm::TableViewBase *, std::default_delete<realm::TableViewBase>> { struct TableViewBase *x0; } x0; } x8; } x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; struct Optional<unsigned long long> { union { unsigned long long x0; char x1; } x0; BOOL x1; } x14; unsigned long long x15; })tableView;
- (id)valueForKey:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)removeAllObjects;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (BOOL)isInvalidated;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)exchangeObjectAtIndex:(unsigned long long)a0 withObjectAtIndex:(unsigned long long)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)addObjectsFromArray:(id)a0;
- (id)addNotificationBlock:(id /* block */)a0;
- (void)moveObjectAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (id).cxx_construct;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (BOOL)isBackedByList:(const void *)a0;
- (unsigned long long)columnForProperty:(id)a0;
- (id)initWithParent:(id)a0 property:(id)a1;
- (id)initWithList:(struct List { struct shared_ptr<realm::Realm> { struct Realm *x0; struct __shared_weak_count *x1; } x0; struct ObjectSchema *x1; struct shared_ptr<realm::LinkView> { struct LinkView *x0; struct __shared_weak_count *x1; } x2; struct BasicTableRef<realm::Table> { struct Table *x0; } x3; struct Handle<realm::_impl::CollectionNotifier> { struct CollectionNotifier *x0; struct __shared_weak_count *x1; } x4; })a0 realm:(id)a1 parentInfo:(void *)a2 property:(id)a3;
- (id)objectsWithPredicate:(id)a0;
- (struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::default_delete<realm::ThreadSafeReferenceBase>> { struct ThreadSafeReferenceBase *x0; } x0; })makeThreadSafeReference;
- (void)deleteObjectsFromRealm;
- (unsigned long long)indexOfObjectWithPredicate:(id)a0;
- (id)averageOfProperty:(id)a0;
- (id)sortedResultsUsingDescriptors:(id)a0;
- (id)fastEnumerator;
- (id)minOfProperty:(id)a0;
- (id)maxOfProperty:(id)a0;
- (id)sumOfProperty:(id)a0;

@end
