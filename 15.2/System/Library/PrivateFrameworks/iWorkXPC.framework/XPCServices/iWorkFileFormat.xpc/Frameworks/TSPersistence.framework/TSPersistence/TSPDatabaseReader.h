@class NSString, TSPComponent, TSPDatabase, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface TSPDatabaseReader : TSPReader <TSPDatabaseUnarchiverDelegate> {
    NSObject<OS_dispatch_queue> *_databaseQueue;
    TSPDatabase *_database;
    unsigned long long _databaseVersion;
    struct IdentifierMap<long long> { struct __hash_table<std::__hash_value_type<const long long, long long>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, long long>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, long long>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, long long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, long long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, long long>, std::hash<long long>, std::equal_to<const long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, long long>, std::equal_to<const long long>, std::hash<long long>, true>> { float __value_; } __p3_; } __table_; } _readIdentifiers;
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
- (id)dataForIdentifier:(long long)a0 referencedByObjectIdentifier:(long long)a1 objectClass:(Class)a2;
- (id)initWithComponent:(id)a0 finalizeHandlerQueue:(id)a1 delegate:(id)a2;
- (void)beginReadingWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)didUnarchiveObject:(id)a0 withUnarchiver:(id)a1;
- (void)unarchiveObjectWithIdentifierAsync:(long long)a0 referencedByObjectIdentifier:(long long)a1 objectClass:(Class)a2;
- (id)newUnarchiverWithDatabaseObject:(id)a0;
- (struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)newDataMessageForDatabaseObject:(id)a0;
- (struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)newImageDataMessageForDatabaseObject:(id)a0;
- (BOOL)validateObjectIdentifierForObject:(id)a0;
- (void)resolveReferences;
- (id)appRelativePathForOldDataArchive:(const void *)a0;
- (id)dataForOldDataArchive:(const void *)a0;
- (id)filenameFromOldDataArchive:(const void *)a0;
- (void *)filterIdentifiers:(const void *)a0;
- (id)initWithComponent:(id)a0 finalizeHandlerQueue:(id)a1 delegate:(id)a2 database:(id)a3 databaseVersion:(unsigned long long)a4;
- (void)enumerateDataAppRelativePathsUsingBlock:(id /* block */)a0;

@end
