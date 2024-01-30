@class NSString, TSPComponent, TSPDatabase, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface TSPDatabaseReader : TSPReader <TSPDatabaseUnarchiverDelegate> {
    NSObject<OS_dispatch_queue> *_databaseQueue;
    TSPDatabase *_database;
    unsigned long long _databaseVersion;
    struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::__hash_value_type<const long long, bool>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, bool> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true> > { float __value_; } __p3_; } __table_; } _readIdentifiers;
    NSHashTable *_datas;
}

@property (readonly, nonatomic) long long componentIdentifier;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) BOOL didFinishResolvingReferences;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) BOOL canRetainObjectReferencedByWeakLazyReference;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) TSPComponent *component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)objectUUIDMap;
- (id)initWithComponent:(id)a0 finalizeHandlerQueue:(id)a1 delegate:(id)a2;
- (void)beginReadingWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)didUnarchiveObject:(id)a0 withUnarchiver:(id)a1;
- (void)unarchiveObjectWithIdentifierAsync:(long long)a0;
- (id)newUnarchiverWithDatabaseObject:(id)a0;
- (struct Message { void /* function */ **x0; } *)newDataMessageForDatabaseObject:(id)a0;
- (struct Message { void /* function */ **x0; } *)newImageDataMessageForDatabaseObject:(id)a0;
- (BOOL)validateObjectIdentifierForObject:(id)a0;
- (void)resolveReferences;
- (id)appRelativePathForOldDataArchive:(const struct DatabaseDataArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct Reference *x6; unsigned long long x7; unsigned int x8; BOOL x9; } *)a0;
- (id)dataForOldDataArchive:(const struct DatabaseDataArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct Reference *x6; unsigned long long x7; unsigned int x8; BOOL x9; } *)a0;
- (id)filenameFromOldDataArchive:(const struct DatabaseDataArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct Reference *x6; unsigned long long x7; unsigned int x8; BOOL x9; } *)a0;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x0; } x2; } x0; } *)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x0; } x2; } x0; } *)a0;
- (id)initWithComponent:(id)a0 finalizeHandlerQueue:(id)a1 delegate:(id)a2 database:(id)a3 databaseVersion:(unsigned long long)a4;
- (void)enumerateDataAppRelativePathsUsingBlock:(id /* block */)a0;

@end
