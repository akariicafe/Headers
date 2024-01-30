@class NSString, RLMObjectSchema, RLMRealm;

@interface RLMObjectBase : NSObject <RLMThreadConfined, RLMThreadConfined_Private> {
    struct BasicRow<realm::Table> { struct BasicTableRef<realm::Table> { struct Table *m_ptr; } m_table; unsigned long long m_row_ndx; struct RowBase *m_prev; struct RowBase *m_next; } _row;
    struct RLMObservationInfo { struct RLMObservationInfo *x0; struct RLMObservationInfo *x1; struct BasicRow<realm::Table> { struct BasicTableRef<realm::Table> { struct Table *x0; } x0; unsigned long long x1; struct RowBase *x2; struct RowBase *x3; } x2; struct RLMClassInfo *x3; id x4; BOOL x5; unsigned long long x6; id x7; id x8; id x9; } *_observationInfo;
    struct RLMClassInfo { id x0; id x1; struct ObjectSchema *x2; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo **x0; struct RLMObservationInfo **x1; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *> > { struct RLMObservationInfo **x0; } x2; } x3; struct Table *x4; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo **x0; struct RLMClassInfo **x1; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *> > { struct RLMClassInfo **x0; } x2; } x5; } *_info;
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

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)sharedSchema;
+ (id)className;
+ (BOOL)shouldIncludeInDefaultSchema;
+ (void)initializeLinkedObjectSchemas;
+ (Class)objectUtilClass:(BOOL)a0;
+ (id)_realmObjectName;
+ (id)_realmColumnNames;
+ (id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct ThreadSafeReferenceBase *x0; } x0; })a0 metadata:(id)a1 realm:(id)a2;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)valueForKey:(id)a0;
- (id)mutableArrayValueForKey:(id)a0;
- (id)objectSchema;
- (struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct ThreadSafeReferenceBase *x0; } x0; })makeThreadSafeReference;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)initWithValue:(id)a0 schema:(id)a1;
- (id)initWithRealm:(id)a0 schema:(id)a1;
- (id)descriptionWithMaxDepth:(unsigned long long)a0;

@end
