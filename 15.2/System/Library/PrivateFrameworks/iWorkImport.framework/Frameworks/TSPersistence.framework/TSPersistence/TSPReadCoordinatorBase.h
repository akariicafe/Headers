@class NSMutableArray, NSUUID, NSString, NSHashTable, NSError, NSObject, TSPCancellationState;
@protocol OS_dispatch_queue;

@interface TSPReadCoordinatorBase : NSObject <TSPReaderDelegate, TSPLazyReferenceDelegate> {
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    _Atomic BOOL _success;
    NSObject<OS_dispatch_queue> *_lazyReferenceQueue;
    NSHashTable *_lazyReferences;
    NSHashTable *_lazyReferenceCopies;
    NSMutableArray *_lazyReferenceObserverBlocks;
    _Atomic BOOL _didSetLazyReferenceDelegate;
    NSObject<OS_dispatch_queue> *_externalReferenceQueue;
    struct IdentifierMap<TSP::ExternalReferenceInfo> { struct __hash_table<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::hash<long long>, std::equal_to<const long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ExternalReferenceInfo>, std::equal_to<const long long>, std::hash<long long>, true>> { float __value_; } __p3_; } __table_; } _externalReferences;
    struct vector<TSP::RepeatedExternalReferenceCompletionInfo, std::allocator<TSP::RepeatedExternalReferenceCompletionInfo>> { struct RepeatedExternalReferenceCompletionInfo *__begin_; struct RepeatedExternalReferenceCompletionInfo *__end_; struct __compressed_pair<TSP::RepeatedExternalReferenceCompletionInfo *, std::allocator<TSP::RepeatedExternalReferenceCompletionInfo>> { struct RepeatedExternalReferenceCompletionInfo *__value_; } __end_cap_; } _repeatedExternalReferences;
    _Atomic BOOL _didResolveExternalReferences;
}

@property (readonly) BOOL success;
@property (retain) NSError *error;
@property (retain, nonatomic) TSPCancellationState *cancellationState;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSUUID *baseObjectUUID;
@property (readonly, nonatomic) BOOL isReadingFromDocument;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL ignoreReferencesToUnknownObjects;

- (id)context;
- (void).cxx_destruct;
- (id)objectForIdentifier:(long long)a0;
- (id)init;
- (id).cxx_construct;
- (void)lazyReference:(id)a0 didCreateCopy:(id)a1;
- (void)addLoadObserver:(id)a0 action:(SEL)a1 forLazyReference:(id)a2;
- (void)updatePersistedDataReferenceMap;
- (BOOL)readLazyReference:(id)a0 object:(id *)a1 error:(id *)a2;
- (BOOL)resolveExternalReferences;
- (void)setLazyReferencesDelegateToObjectContext;
- (void)reader:(id)a0 didFindExternalReferenceToObjectIdentifier:(long long)a1 componentIdentifier:(long long)a2 isWeak:(BOOL)a3 allowUnknownObject:(BOOL)a4 objectClass:(Class)a5 objectProtocol:(id)a6 fromParentObject:(id)a7 completion:(id /* block */)a8;
- (void)reader:(id)a0 didFindExternalRepeatedReference:(id)a1 isWeak:(BOOL)a2 allowUnknownObject:(BOOL)a3 objectClass:(Class)a4 objectProtocol:(id)a5 fromParentObject:(id)a6 completion:(id /* block */)a7;
- (void)reader:(id)a0 didReadLazyReference:(id)a1;
- (void)didUpdateLazyReferenceDelegate:(id)a0;
- (id)unarchivedObjectForIdentifier:(long long)a0 isReadFinished:(BOOL)a1;
- (id)externalObjectForIdentifier:(long long)a0 componentIdentifier:(long long)a1 isReadFinished:(BOOL)a2;
- (void)didReferenceExternalObject:(id)a0 withIdentifier:(long long)a1;
- (long long)reader:(id)a0 wantsObjectIdentifierForUUID:(id)a1;
- (id)reader:(id)a0 wantsDataForIdentifier:(long long)a1;
- (id)contextForReader:(id)a0;
- (id)lazyReferenceDelegateForReader:(id)a0;
- (void)setLazyReferencesDelegate:(id)a0 forLazyReference:(id)a1;
- (void)setLazyReferencesDelegate:(id)a0 forLazyReferenceCopy:(id)a1;
- (void *)externalReferenceInfoForObjectIdentifier:(long long)a0 componentIdentifier:(long long)a1;
- (id)objectDelegateForReader:(id)a0;
- (id)cancellationStateForReader:(id)a0;

@end
