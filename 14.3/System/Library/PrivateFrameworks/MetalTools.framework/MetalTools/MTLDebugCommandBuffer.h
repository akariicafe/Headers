@class _MTLCommandEncoder, MTLToolsObject, NSMutableSet;

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer {
    _MTLCommandEncoder *_currentEncoder;
    struct unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple> > { struct __hash_table<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *>, std::__1::allocator<std::__1::__hash_node<AttachmentDescriptorSimple, void *> > > { struct __hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> { struct __hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, AttachmentDescriptorSimple::hash_t> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, AttachmentDescriptorSimple::equal_t> { float __value_; } __p3_; } __table_; } _attachmentSet;
    struct array<AttachmentDescriptorSimple, 8> { struct AttachmentDescriptorSimple { void *texture; unsigned long long level; struct _NSRange { unsigned long long location; unsigned long long length; } sliceRange; struct _NSRange { unsigned long long location; unsigned long long length; } depthPlaneRange; unsigned long long storeAction; } __elems_[8]; } _prevAttachments;
    struct array<AttachmentDescriptorSimple, 8> { struct AttachmentDescriptorSimple { void *texture; unsigned long long level; struct _NSRange { unsigned long long location; unsigned long long length; } sliceRange; struct _NSRange { unsigned long long location; unsigned long long length; } depthPlaneRange; unsigned long long storeAction; } __elems_[8]; } _currAttachments;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _purgeableObjectsLock;
    struct unordered_set<id<MTLDebugResourcePurgeable>, std::__1::hash<id<MTLDebugResourcePurgeable> >, std::__1::equal_to<id<MTLDebugResourcePurgeable> >, std::__1::allocator<id<MTLDebugResourcePurgeable> > > { struct __hash_table<id<MTLDebugResourcePurgeable>, std::__1::hash<id<MTLDebugResourcePurgeable> >, std::__1::equal_to<id<MTLDebugResourcePurgeable> >, std::__1::allocator<id<MTLDebugResourcePurgeable> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *>, std::__1::allocator<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> > > { struct __hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> { struct __hash_node_base<std::__1::__hash_node<id<MTLDebugResourcePurgeable>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::hash<id<MTLDebugResourcePurgeable> > > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::equal_to<id<MTLDebugResourcePurgeable> > > { float __value_; } __p3_; } __table_; } _referencedPurgeableObjects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainedObjectsLock;
    struct unordered_set<MTLToolsObject *, std::__1::hash<MTLToolsObject *>, std::__1::equal_to<MTLToolsObject *>, std::__1::allocator<MTLToolsObject *> > { struct __hash_table<MTLToolsObject *, std::__1::hash<MTLToolsObject *>, std::__1::equal_to<MTLToolsObject *>, std::__1::allocator<MTLToolsObject *> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *>, std::__1::allocator<std::__1::__hash_node<MTLToolsObject *, void *> > > { struct __hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> { struct __hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::hash<MTLToolsObject *> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::equal_to<MTLToolsObject *> > { float __value_; } __p3_; } __table_; } _externallyRetainedObjects;
    struct unordered_set<MTLToolsObject *, std::__1::hash<MTLToolsObject *>, std::__1::equal_to<MTLToolsObject *>, std::__1::allocator<MTLToolsObject *> > { struct __hash_table<MTLToolsObject *, std::__1::hash<MTLToolsObject *>, std::__1::equal_to<MTLToolsObject *>, std::__1::allocator<MTLToolsObject *> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *>, std::__1::allocator<std::__1::__hash_node<MTLToolsObject *, void *> > > { struct __hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> { struct __hash_node_base<std::__1::__hash_node<MTLToolsObject *, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::hash<MTLToolsObject *> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::equal_to<MTLToolsObject *> > { float __value_; } __p3_; } __table_; } _internallyRetainedObjects;
    MTLToolsObject *_referencedDeadObject;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _renderTargetAttachmentLock;
    NSMutableSet *_renderTargetAttachments;
}

- (void *)debugBufferContentsWithLength:(unsigned long long *)a0;
- (void).cxx_destruct;
- (id)resourceStateCommandEncoderWithDescriptor:(id)a0;
- (void)waitUntilScheduled;
- (void)dealloc;
- (id)accelerationStructureCommandEncoder;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)executeSynchronizationNotifications:(int)a0 scope:(unsigned long long)a1 resources:(const id *)a2 count:(unsigned long long)a3;
- (void)addSynchronizationNotification:(id /* block */)a0;
- (void)waitUntilCompleted;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (void)executeSynchronizationNotifications:(int)a0;
- (id)computeCommandEncoder;
- (id).cxx_construct;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (void)addScheduledHandler:(id /* block */)a0;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (id)blitCommandEncoder;
- (id)blitCommandEncoderWithDescriptor:(id)a0;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned int)a2;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)a0;
- (id)resourceStateCommandEncoder;
- (void)addCompletedHandler:(id /* block */)a0;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (id)computeCommandEncoderWithDescriptor:(id)a0;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (void)preCompletionHandlers;
- (void)postCompletionHandlers;
- (void)preCommit;
- (id)unwrapMTLRenderPassDescriptor:(id)a0;
- (id)initWithCommandBuffer:(id)a0 commandQueue:(id)a1;
- (void)addObject:(id)a0 retained:(BOOL)a1 purgeable:(BOOL)a2;
- (void)addReferencedObject:(id)a0 internallyRetained:(BOOL)a1;
- (void)addPurgeableObject:(id)a0;
- (void)lockPurgeableObjects;
- (void)unlockPurgeableObjects;
- (void)removeAllReferencedObjects:(BOOL)a0;
- (void)onParallelRenderCommanderEndEncoding;
- (void)validateStoreLoadTransition:(id)a0 atIndex:(unsigned long long)a1 renderTargetArrayLength:(unsigned long long)a2;
- (BOOL)testObjectReferenced:(id)a0 wasInternallyRetained:(BOOL *)a1;
- (void)addActiveRenderTargets:(id)a0;
- (void)addActiveRenderTarget:(id)a0;
- (BOOL)renderTargetInActiveRenderTargets:(id)a0;

@end
