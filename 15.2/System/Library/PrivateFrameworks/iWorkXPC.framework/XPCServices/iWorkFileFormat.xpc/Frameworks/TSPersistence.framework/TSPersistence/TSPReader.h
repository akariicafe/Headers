@class TSPComponent, NSString, TSPObjectContext, NSError, TSPMutableComponentDataReferenceMap, TSPFinalizeHandlerQueue, NSMapTable, NSHashTable, NSObject, TSPCancellationState, TSPComponentObjectUUIDMap;
@protocol OS_dispatch_group, OS_dispatch_queue, TSPReaderDelegate;

@interface TSPReader : NSObject <TSPObjectDelegate, TSPUnarchiverDelegate> {
    BOOL _hasReadFailure;
    TSPCancellationState *_cancellationState;
    unsigned long long _fileFormatVersion;
    TSPComponentObjectUUIDMap *_componentObjectUUIDMap;
    TSPMutableComponentDataReferenceMap *_componentDataReferenceMap;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_unarchiveQueue;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    struct IdentifierMap<TSP::ObjectInfo> { struct __hash_table<std::__hash_value_type<const long long, TSP::ObjectInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSP::ObjectInfo>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ObjectInfo>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::hash<long long>, std::equal_to<const long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ObjectInfo>, std::equal_to<const long long>, std::hash<long long>, true>> { float __value_; } __p3_; } __table_; } _objectInfoMap;
    struct vector<TSP::UnarchiverRepeatedReference, std::allocator<TSP::UnarchiverRepeatedReference>> { struct UnarchiverRepeatedReference *__begin_; struct UnarchiverRepeatedReference *__end_; struct __compressed_pair<TSP::UnarchiverRepeatedReference *, std::allocator<TSP::UnarchiverRepeatedReference>> { struct UnarchiverRepeatedReference *__value_; } __end_cap_; } _repeatedReferences;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_objectsToModifyQueue;
    NSHashTable *_objectsToModify;
    struct { unsigned char didFinishResolvingReferences : 1; unsigned char needsUpgrade : 1; unsigned char hasDocumentVersionUUID : 1; unsigned char sourceType : 3; unsigned char canRetainObjectReferencedByWeakLazyReference : 1; unsigned char isCrossDocumentPaste : 1; unsigned char isCrossAppPaste : 1; unsigned char delegateRespondsToDidResetObjectIdentifierForObject : 1; unsigned char delegateRespondsToDidResetObjectUUID : 1; unsigned char delegateRespondsToDidUnarchiveObject : 1; } _flags;
}

@property (readonly, weak, nonatomic) id<TSPReaderDelegate> delegate;
@property (readonly, nonatomic) TSPComponent *component;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *completionGroup;
@property (retain, nonatomic) NSError *error;
@property (readonly) BOOL hasReadFailure;
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) long long componentIdentifier;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) BOOL didFinishResolvingReferences;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) BOOL canRetainObjectReferencedByWeakLazyReference;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (long long)modifyObjectTokenForNewObject;
- (long long)newObjectIdentifier;
- (id)newObjectUUIDForObject:(id)a0 uuidNamespace:(unsigned char)a1 offset:(unsigned long long)a2 ignoringBaseUUIDForObjectUUID:(BOOL)a3 requireDeterministicUUID:(BOOL)a4;
- (void)beginIgnoringModificationsForObject:(id)a0;
- (void)endIgnoringModificationsForObject:(id)a0;
- (void)willModifyObject:(id)a0 options:(unsigned long long)a1;
- (BOOL)canSetObjectUUIDForObject:(id)a0;
- (id)objectUUIDMap;
- (BOOL)isObjectInDocument:(id)a0;
- (void)unarchiver:(id)a0 didReadLazyReference:(id)a1 isExternal:(BOOL *)a2;
- (id)dataForIdentifier:(long long)a0 referencedByObjectIdentifier:(long long)a1 objectClass:(Class)a2;
- (long long)objectIdentifierForUUID:(id)a0;
- (id)UUIDForObjectIdentifier:(long long)a0;
- (void)readWithIOCompletionQueue:(id)a0 ioCompletion:(id /* block */)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldValidateComponentsOfInMemoryObjects;
- (id)initWithComponent:(id)a0 finalizeHandlerQueue:(id)a1 delegate:(id)a2;
- (void)attemptedToReadInMemoryObject:(id)a0 objectIdentifier:(long long)a1;
- (void)unarchiveObjectWithUnarchiver:(id)a0;
- (void)beginReadingWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)didUnarchiveObject:(id)a0 withUnarchiver:(id)a1;
- (BOOL)validateObjectIdentifierForObject:(id)a0;
- (void)resolveReferences;
- (BOOL)finishUnarchiving;
- (void)processObjectsToModifyWithRootObject:(id)a0;
- (void)addUnarchivedObject:(id)a0 unarchiver:(id)a1;
- (void *)objectInfoForIdentifier:(long long)a0;
- (void)setObjectDelegatesToContextObjectDelegate;

@end
