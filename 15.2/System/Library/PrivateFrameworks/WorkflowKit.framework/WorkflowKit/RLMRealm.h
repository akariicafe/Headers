@class RLMSchema, RLMRealmConfiguration, NSHashTable;

@interface RLMRealm : NSObject {
    struct shared_ptr<realm::Realm> { struct Realm *__ptr_; struct __shared_weak_count *__cntrl_; } _realm;
    struct RLMSchemaInfo { struct unordered_map<NSString *, RLMClassInfo, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, RLMClassInfo>>> { struct __hash_table<std::__hash_value_type<NSString *, RLMClassInfo>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, RLMClassInfo>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::hash<NSString *>, std::equal_to<NSString *>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::equal_to<NSString *>, std::hash<NSString *>, true>> { float __value_; } __p3_; } __table_; } m_objects; } _info;
    struct unique_ptr<RLMResultsSetInfo, std::default_delete<RLMResultsSetInfo>> { struct __compressed_pair<RLMResultsSetInfo *, std::default_delete<RLMResultsSetInfo>> { struct RLMResultsSetInfo *__value_; } __ptr_; } _resultsSetInfo;
    NSHashTable *_collectionEnumerators;
    BOOL _sendingNotifications;
}

@property (retain, nonatomic) NSHashTable *notificationHandlers;
@property (readonly, nonatomic) void *group;
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

- (BOOL)compact;
- (id)addNotificationBlock:(id /* block */)a0;
- (id)allObjects:(id)a0;
- (id)initPrivate;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)invalidate;
- (BOOL)refresh;
- (void)deleteAllObjects;
- (void)dealloc;
- (void)deleteObject:(id)a0;
- (id).cxx_construct;
- (void)transactionWithBlock:(id /* block */)a0;
- (void)deleteObjects:(id)a0;
- (void)addObjects:(id)a0;
- (void)beginWriteTransaction;
- (id)createObject:(id)a0 withValue:(id)a1;
- (void)verifyNotificationsAreSupported:(BOOL)a0;
- (void)verifyThread;
- (BOOL)commitWriteTransaction:(id *)a0;
- (BOOL)transactionWithBlock:(id /* block */)a0 error:(id *)a1;
- (void)detachAllEnumerators;
- (void)cancelWriteTransaction;
- (void)addOrUpdateObject:(id)a0;
- (id)objects:(id)a0 where:(id)a1 args:(char *)a2;
- (id)objects:(id)a0 withPredicate:(id)a1;
- (void)sendNotifications:(id)a0;
- (void)commitWriteTransaction;
- (BOOL)commitWriteTransactionWithoutNotifying:(id)a0 error:(id *)a1;
- (id)resolveThreadSafeReference:(id)a0;
- (void)addOrUpdateObjects:(id)a0;
- (id)objects:(id)a0 where:(id)a1;
- (id)objectWithClassName:(id)a0 forPrimaryKey:(id)a1;
- (BOOL)writeCopyToURL:(id)a0 encryptionKey:(id)a1 error:(id *)a2;
- (void)registerEnumerator:(id)a0;
- (void)unregisterEnumerator:(id)a0;

@end
