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
    struct unordered_map<long long, TSP::ExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ExternalReferenceInfo> > > { struct __hash_table<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, TSP::ObjectIdentifierHash, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, TSP::ObjectIdentifierHash, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, std::__1::equal_to<long long>, true> > { float __value_; } __p3_; } __table_; } _externalReferences;
    struct vector<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> > { struct RepeatedExternalReferenceCompletionInfo *__begin_; struct RepeatedExternalReferenceCompletionInfo *__end_; struct __compressed_pair<TSP::RepeatedExternalReferenceCompletionInfo *, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> > { struct RepeatedExternalReferenceCompletionInfo *__value_; } __end_cap_; } _repeatedExternalReferences;
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
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) BOOL canRetainObjectReferencedByWeakLazyReference;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL ignoreReferencesToUnknownObjects;

- (id)context;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)objectForIdentifier:(long long)a0;
- (void)lazyReference:(id)a0 didCreateCopy:(id)a1;
- (void)addLoadObserver:(id)a0 action:(SEL)a1 forLazyReference:(id)a2;
- (BOOL)readLazyReference:(id)a0 object:(id *)a1 error:(id *)a2;
- (BOOL)resolveExternalReferences;
- (void)setLazyReferencesDelegateToObjectContext;
- (void)reader:(id)a0 didFindExternalReferenceToObjectIdentifier:(long long)a1 componentIdentifier:(long long)a2 isWeak:(BOOL)a3 allowUnknownObject:(BOOL)a4 fromParentObject:(id)a5 completion:(id /* block */)a6;
- (void)reader:(id)a0 didFindExternalRepeatedReference:(id)a1 isWeak:(BOOL)a2 allowUnknownObject:(BOOL)a3 fromParentObject:(id)a4 completion:(id /* block */)a5;
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
- (struct ExternalReferenceInfo { long long x0; struct vector<TSP::ExternalReferenceCompletionInfo, std::__1::allocator<TSP::ExternalReferenceCompletionInfo> > { struct ExternalReferenceCompletionInfo *x0; struct ExternalReferenceCompletionInfo *x1; struct __compressed_pair<TSP::ExternalReferenceCompletionInfo *, std::__1::allocator<TSP::ExternalReferenceCompletionInfo> > { struct ExternalReferenceCompletionInfo *x0; } x2; } x1; } *)externalReferenceInfoForObjectIdentifier:(long long)a0 componentIdentifier:(long long)a1;
- (id)objectDelegateForReader:(id)a0;
- (id)cancellationStateForReader:(id)a0;

@end
