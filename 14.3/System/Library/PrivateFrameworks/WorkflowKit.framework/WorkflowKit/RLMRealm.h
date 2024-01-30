@class RLMSchema, RLMRealmConfiguration, NSHashTable;

@interface RLMRealm : NSObject {
    struct shared_ptr<realm::Realm> { struct Realm *__ptr_; struct __shared_weak_count *__cntrl_; } _realm;
    struct RLMSchemaInfo { struct unordered_map<NSString *, RLMClassInfo, std::__1::hash<NSString *>, std::__1::equal_to<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, RLMClassInfo> > > { struct __hash_table<std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::hash<NSString *>, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::equal_to<NSString *>, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, RLMClassInfo> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::hash<NSString *>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, RLMClassInfo>, std::__1::equal_to<NSString *>, true> > { float __value_; } __p3_; } __table_; } m_objects; } _info;
    struct unique_ptr<RLMResultsSetInfo, std::__1::default_delete<RLMResultsSetInfo> > { struct __compressed_pair<RLMResultsSetInfo *, std::__1::default_delete<RLMResultsSetInfo> > { struct RLMResultsSetInfo *__value_; } __ptr_; } _resultsSetInfo;
    NSHashTable *_collectionEnumerators;
    BOOL _sendingNotifications;
}

@property (retain, nonatomic) NSHashTable *notificationHandlers;
@property (readonly, nonatomic) struct Group { void /* function */ **x0; struct SlabAlloc { void /* function */ **x0; unsigned long long x1; struct Replication *x2; unsigned long long x3; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__1::__cxx_atomic_base_impl<unsigned long long> > { _Atomic unsigned long long x0; } x0; } x4; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__1::__cxx_atomic_base_impl<unsigned long long> > { _Atomic unsigned long long x0; } x0; } x5; struct Config { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; char *x7; } x6; struct map<int, realm::SlabAlloc::FreeBlock *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, realm::SlabAlloc::FreeBlock *> > > { struct __tree<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, realm::SlabAlloc::FreeBlock *>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x7; struct shared_ptr<realm::SlabAlloc::MappedFile> { struct MappedFile *x0; struct __shared_weak_count *x1; } x8; struct unique_ptr<std::__1::shared_ptr<const realm::util::File::Map<char> > [], std::__1::default_delete<std::__1::shared_ptr<const realm::util::File::Map<char> > []> > { struct __compressed_pair<std::__1::shared_ptr<const realm::util::File::Map<char> > *, std::__1::default_delete<std::__1::shared_ptr<const realm::util::File::Map<char> > []> > { struct shared_ptr<const realm::util::File::Map<char> > *x0; } x0; } x9; unsigned long long x10; char *x11; unsigned long long x12; unsigned long long x13; int x14; struct unique_ptr<unsigned long [], std::__1::default_delete<unsigned long []> > { struct __compressed_pair<unsigned long *, std::__1::default_delete<unsigned long []> > { unsigned long long *x0; } x0; } x15; unsigned long long x16; int x17; int x18; struct vector<realm::SlabAlloc::Slab, std::__1::allocator<realm::SlabAlloc::Slab> > { struct Slab *x0; struct Slab *x1; struct __compressed_pair<realm::SlabAlloc::Slab *, std::__1::allocator<realm::SlabAlloc::Slab> > { struct Slab *x0; } x2; } x19; struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > > { struct __tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true> > { unsigned long long x0; } x2; } x0; } x20; unsigned long long x21; BOOL x22; struct hash_entry { unsigned long long x0; char *x1; unsigned long long x2; } x23[256]; unsigned long long x24; } x1; int x2; struct Array { void /* function */ **x0; struct VTable *x1; char *x2; long long x3; long long x4; unsigned long long x5; unsigned long long x6; struct Allocator *x7; unsigned long long x8; struct ArrayParent *x9; unsigned long long x10; unsigned char x11; BOOL x12; BOOL x13; BOOL x14; } x3; struct ArrayInteger { void /* function */ **x0; struct VTable *x1; char *x2; long long x3; long long x4; unsigned long long x5; unsigned long long x6; struct Allocator *x7; unsigned long long x8; struct ArrayParent *x9; unsigned long long x10; unsigned char x11; BOOL x12; BOOL x13; BOOL x14; } x4; struct ArrayString { void /* function */ **x0; struct VTable *x1; char *x2; long long x3; long long x4; unsigned long long x5; unsigned long long x6; struct Allocator *x7; unsigned long long x8; struct ArrayParent *x9; unsigned long long x10; unsigned char x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; } x5; struct vector<realm::Table *, std::__1::allocator<realm::Table *> > { struct Table **x0; struct Table **x1; struct __compressed_pair<realm::Table **, std::__1::allocator<realm::Table *> > { struct Table **x0; } x2; } x6; BOOL x7; BOOL x8; struct function<void (const realm::Group::CascadeNotification &)> { struct __value_func<void (const realm::Group::CascadeNotification &)> { struct type { unsigned char x0[24]; } x0; struct __base<void (const realm::Group::CascadeNotification &)> *x1; } x0; } x9; struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; struct __base<void ()> *x1; } x0; } x10; struct shared_ptr<realm::metrics::Metrics> { struct Metrics *x0; struct __shared_weak_count *x1; } x11; unsigned long long x12; } *group;
@property (readonly, nonatomic) BOOL dynamic;
@property (retain, nonatomic) RLMSchema *schema;
@property (readonly, nonatomic) BOOL inWriteTransaction;
@property (readonly, nonatomic) RLMRealmConfiguration *configuration;
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) BOOL autorefresh;

+ (id)defaultRealm;
+ (id)realmWithConfiguration:(id)a0 error:(id *)a1;
+ (BOOL)isCoreDebug;
+ (id)realmWithURL:(id)a0;
+ (id)asyncOpenWithConfiguration:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;
+ (id)realmWithSharedRealm:(struct shared_ptr<realm::Realm> { struct Realm *x0; struct __shared_weak_count *x1; })a0 schema:(id)a1;
+ (id)uncachedSchemalessRealmWithConfiguration:(id)a0 error:(id *)a1;
+ (void)resetRealmState;
+ (unsigned long long)schemaVersionAtURL:(id)a0 encryptionKey:(id)a1 error:(id *)a2;
+ (BOOL)performMigrationForConfiguration:(id)a0 error:(id *)a1;

- (void)deleteAllObjects;
- (void)deleteObject:(id)a0;
- (void)verifyNotificationsAreSupported:(BOOL)a0;
- (id)initPrivate;
- (BOOL)refresh;
- (BOOL)compact;
- (id)objectWithClassName:(id)a0 forPrimaryKey:(id)a1;
- (void)verifyThread;
- (void).cxx_destruct;
- (void)unregisterEnumerator:(id)a0;
- (void)commitWriteTransaction;
- (void)dealloc;
- (BOOL)commitWriteTransactionWithoutNotifying:(id)a0 error:(id *)a1;
- (id)addNotificationBlock:(id /* block */)a0;
- (id)resolveThreadSafeReference:(id)a0;
- (void)transactionWithBlock:(id /* block */)a0;
- (BOOL)writeCopyToURL:(id)a0 encryptionKey:(id)a1 error:(id *)a2;
- (id)allObjects:(id)a0;
- (id)objects:(id)a0 withPredicate:(id)a1;
- (id)objects:(id)a0 where:(id)a1;
- (id)createObject:(id)a0 withValue:(id)a1;
- (void)registerEnumerator:(id)a0;
- (void)cancelWriteTransaction;
- (id)objects:(id)a0 where:(id)a1 args:(char *)a2;
- (id).cxx_construct;
- (void)beginWriteTransaction;
- (BOOL)commitWriteTransaction:(id *)a0;
- (void)addObjects:(id)a0;
- (void)addOrUpdateObject:(id)a0;
- (void)addOrUpdateObjects:(id)a0;
- (void)sendNotifications:(id)a0;
- (void)deleteObjects:(id)a0;
- (void)detachAllEnumerators;
- (void)addObject:(id)a0;
- (void)invalidate;
- (BOOL)transactionWithBlock:(id /* block */)a0 error:(id *)a1;

@end
