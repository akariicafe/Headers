@class NSString, RLMObjectSchema, RLMRealm;

@interface RLMObjectBase : NSObject <RLMThreadConfined, RLMThreadConfined_Private> {
    struct BasicRow<realm::Table> { struct BasicTableRef<realm::Table> { struct Table *m_ptr; } m_table; unsigned long long m_row_ndx; struct RowBase *m_prev; struct RowBase *m_next; } _row;
    void *_observationInfo;
    void *_info;
    RLMRealm *_realm;
    RLMObjectSchema *_objectSchema;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) RLMRealm *realm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id objectiveCMetadata;

+ (id)className;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)shouldIncludeInDefaultSchema;
+ (id)sharedSchema;
+ (void)initializeLinkedObjectSchemas;
+ (Class)objectUtilClass:(BOOL)a0;
+ (id)_realmObjectName;
+ (id)_realmColumnNames;
+ (id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::default_delete<realm::ThreadSafeReferenceBase>> { struct ThreadSafeReferenceBase *x0; } x0; })a0 metadata:(id)a1 realm:(id)a2;

- (id)valueForUndefinedKey:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id)mutableArrayValueForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)objectSchema;
- (id)initWithValue:(id)a0 schema:(id)a1;
- (id)initWithRealm:(id)a0 schema:(id)a1;
- (id)descriptionWithMaxDepth:(unsigned long long)a0;
- (struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::default_delete<realm::ThreadSafeReferenceBase>> { struct ThreadSafeReferenceBase *x0; } x0; })makeThreadSafeReference;

@end
