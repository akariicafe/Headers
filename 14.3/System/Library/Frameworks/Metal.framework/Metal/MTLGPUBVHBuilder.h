@protocol MTLLibrary, MTLDevice;

@interface MTLGPUBVHBuilder : MTLBVHBuilder {
    id<MTLDevice> _device;
    unsigned long long _threadgroupSize;
    id<MTLLibrary> _library;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pipelineCacheLock;
    struct PipelineCache<PipelineKey> { struct unordered_map<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState>, PipelineCache<PipelineKey>::Hasher, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, std::__1::allocator<std::__1::pair<const PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> > > > { struct __hash_table<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, PipelineCache<PipelineKey>::Hasher, true>, std::__1::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, true>, std::__1::allocator<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, PipelineCache<PipelineKey>::Hasher, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<PipelineCache<PipelineKey>::HashKey, std::__1::__hash_value_type<PipelineCache<PipelineKey>::HashKey, id<MTLComputePipelineState> >, std::__1::equal_to<PipelineCache<PipelineKey>::HashKey>, true> > { float __value_; } __p3_; } __table_; } map; } _pipelineCache;
}

+ (unsigned long long)getMaxLeafNodeCountForFragmentCapacity:(unsigned long long)a0 descriptor:(id)a1;
+ (unsigned long long)getBatchCountForFragmentCapacity:(unsigned long long)a0;
+ (BOOL)supportsDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)buildWithEncoder:(id)a0 descriptor:(id)a1 scratchBuffer:(id)a2 scratchBufferOffset:(unsigned long long)a3 fragmentBuffer:(id)a4 fragmentBufferOffset:(unsigned long long)a5 fragmentCapacity:(unsigned long long)a6 sourceFragmentIndexBuffer:(id)a7 sourceFragmentIndexBufferOffset:(unsigned long long)a8 destinationFragmentIndexBuffer:(id)a9 destinationFragmentIndexBufferOffset:(unsigned long long)a10 nodeBuffer:(id)a11 nodeBufferOffset:(unsigned long long)a12 counterBuffer:(id)a13 counterBufferOffset:(unsigned long long)a14 fragmentCountBuffer:(id)a15 fragmentCountBufferOffset:(unsigned long long)a16 boundsMinBuffer:(id)a17 boundsMinBufferOffset:(unsigned long long)a18 boundsMaxBuffer:(id)a19 boundsMaxBufferOffset:(unsigned long long)a20;
- (id)newPipelineWithKey:(struct PipelineKey { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; float x9; float x10; float x11; BOOL x12; BOOL x13; })a0;
- (BOOL)useSpatialSplitsForDescriptor:(id)a0;
- (BOOL)useResourceBufferForDescriptor:(id)a0;
- (id)getPipelineWithKey:(struct PipelineKey { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; float x9; float x10; float x11; BOOL x12; BOOL x13; })a0;
- (id)getPipeline:(unsigned long long)a0;
- (id)getPipeline:(unsigned long long)a0 descriptor:(id)a1;
- (void)dealloc;
- (unsigned long long)getGenericBVHSizeForDescriptor:(id)a0 nodeOffset:(unsigned long long *)a1 fragmentOffset:(unsigned long long *)a2 fragmentIndexOffset:(unsigned long long *)a3;
- (void)dispatchIndirect:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2 threadCountBuffer:(id)a3 threadCountBufferOffset:(unsigned long long)a4 threadCountIndex:(unsigned long long)a5 threadgroupDivisor:(unsigned long long)a6 encoder:(id)a7;
- (id)newResourceBufferWithGeometry:(id)a0;
- (void)dispatchIndirect:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2 counterBuffer:(id)a3 counterBufferOffset:(unsigned long long)a4 counterIndex:(unsigned long long)a5 threadgroupDivisor:(unsigned long long)a6 encoder:(id)a7;
- (void)setCounterInBuffer:(id)a0 offset:(unsigned long long)a1 index:(unsigned long long)a2 value:(unsigned long long)a3 encoder:(id)a4;
- (void)swapCountersInBuffer:(id)a0 offset:(unsigned long long)a1 counterIndex1:(unsigned long long)a2 counterIndex2:(unsigned long long)a3 encoder:(id)a4;
- (unsigned long long)getMTLSWBVHSizeForDescriptor:(id)a0 innerNodeOffset:(unsigned long long *)a1 leafNodeOffset:(unsigned long long *)a2 primitiveOffset:(unsigned long long *)a3 geometryOffset:(unsigned long long *)a4 primitiveBVHOffset:(unsigned long long *)a5 inverseTransformOffset:(unsigned long long *)a6;
- (id)newInstanceBufferWithBVHs:(id)a0;
- (void)getPolygonFragmentsWithEncoder:(id)a0 descriptor:(id)a1 fragmentBuffer:(id)a2 fragmentBufferOffset:(unsigned long long)a3 fragmentCountBuffer:(id)a4 fragmentCountBufferOffset:(unsigned long long)a5 boundsMinBuffer:(id)a6 boundsMinBufferOffset:(unsigned long long)a7 boundsMaxBuffer:(id)a8 boundsMaxBufferOffset:(unsigned long long)a9;
- (void)getBoundingBoxFragmentsWithEncoder:(id)a0 descriptor:(id)a1 fragmentBuffer:(id)a2 fragmentBufferOffset:(unsigned long long)a3 fragmentCountBuffer:(id)a4 fragmentCountBufferOffset:(unsigned long long)a5 boundsMinBuffer:(id)a6 boundsMinBufferOffset:(unsigned long long)a7 boundsMaxBuffer:(id)a8 boundsMaxBufferOffset:(unsigned long long)a9;
- (void)writeBVHHeaderWithEncoder:(id)a0 descriptor:(id)a1 tmpCounterBuffer:(id)a2 tmpCounterBufferOffset:(unsigned long long)a3 nodeBuffer:(id)a4 nodeBufferOffset:(unsigned long long)a5 headerBuffer:(id)a6 headerBufferOffset:(unsigned long long)a7 nodeOffset:(unsigned long long)a8 fragmentOffset:(unsigned long long)a9 fragmentIndexOffset:(unsigned long long)a10 size:(unsigned long long)a11;
- (id)newGeometryBufferWithGeometryDescriptors:(id)a0;
- (void)copyFromBuffer:(id)a0 sourceBufferOffset:(unsigned long long)a1 toBuffer:(id)a2 destinationBufferOffset:(unsigned long long)a3 length:(unsigned long long)a4 encoder:(id)a5;
- (void)copyMTLSWBVHWithEncoder:(id)a0 sourceBuffer:(id)a1 sourceBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 destinationBufferOffset:(unsigned long long)a4 destinationUniqueIdentifier:(unsigned long long)a5 compact:(BOOL)a6;
- (unsigned long long)getGenericBVHSizeForDescriptor:(id)a0;
- (void)writeDeserializedMTLSWBVHSizeWithEncoder:(id)a0 serializedBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 sizeBufferOffset:(unsigned long long)a4;
- (void)writeSerializedMTLSWBVHSizeWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 sizeBufferOffset:(unsigned long long)a4;
- (unsigned long long)getBuildScratchBufferSizeForDescriptor:(id)a0;
- (id).cxx_construct;
- (void)writeSerializationDataWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 destinationBufferOffset:(unsigned long long)a4;
- (void)writeSerializedMTLSWBVHRawSizeWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 sizeBufferOffset:(unsigned long long)a4;
- (unsigned long long)getEncodeMTLSWBVHScratchBufferSizeForDescriptor:(id)a0;
- (void)writeDeserializedMTLSWPrimitiveBVHSizesWithEncoder:(id)a0 serializedBuffer:(id)a1 serializedBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 sizesBufferOffset:(unsigned long long)a4;
- (void)writeSerializedGeometryPrimitiveCountWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 countBufferOffset:(unsigned long long)a4;
- (void)buildGenericBVHWithEncoder:(id)a0 descriptor:(id)a1 outputBuffer:(id)a2 outputBufferOffset:(unsigned long long)a3 scratchBuffer:(id)a4 scratchBufferOffset:(unsigned long long)a5;
- (unsigned long long)getMTLSWBVHSizeForDescriptor:(id)a0;
- (void)writeCompactedMTLSWBVHSizeWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 sizeBufferOffset:(unsigned long long)a4;
- (void)encodeMTLSWBVHWithEncoder:(id)a0 descriptor:(id)a1 outputBuffer:(id)a2 outputBufferOffset:(unsigned long long)a3 genericBVHBuffer:(id)a4 genericBVHBufferOffset:(unsigned long long)a5 scratchBuffer:(id)a6 scratchBufferOffset:(unsigned long long)a7 uniqueIdentifier:(unsigned long long)a8;
- (void)writeMTLSWBVHSizeWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 sizeBufferOffset:(unsigned long long)a4;
- (void)copyMTLSWBVHWithEncoder:(id)a0 sourceBuffer:(id)a1 sourceBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 destinationBufferOffset:(unsigned long long)a4 destinationUniqueIdentifier:(unsigned long long)a5;
- (void)copyAndCompactMTLSWBVHWithEncoder:(id)a0 sourceBuffer:(id)a1 sourceBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 destinationBufferOffset:(unsigned long long)a4 destinationUniqueIdentifier:(unsigned long long)a5;
- (void)getMTLInstanceBoundingBoxesWithEncoder:(id)a0 descriptor:(id)a1 boundingBoxBuffer:(id)a2 boundingBoxBufferOffset:(unsigned long long)a3;
- (unsigned long long)getRefitScratchBufferSizeForDescriptor:(id)a0;
- (void)writeSerializedMTLSWBVHWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 serializedBufferOffset:(unsigned long long)a4;
- (void)refitMTLSWBVHWithEncoder:(id)a0 descriptor:(id)a1 sourceBuffer:(id)a2 sourceBufferOffset:(unsigned long long)a3 destinationBuffer:(id)a4 destinationBufferOffset:(unsigned long long)a5 destinationUniqueIdentifier:(unsigned long long)a6 scratchBuffer:(id)a7 scratchBufferOffset:(unsigned long long)a8;
- (void)writeDeserializedMTLSWBVHWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 primitiveBVHBuffers:(id *)a3 primitiveBVHBufferOffsets:(unsigned long long *)a4 primitiveBVHBufferCount:(unsigned long long)a5 fromBuffer:(id)a6 serializedBufferOffset:(unsigned long long)a7 uniqueIdentifier:(unsigned long long)a8;
- (void)writeSerializedGeometrySizeWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 sizeBufferOffset:(unsigned long long)a4;
- (void)writeSerializedGeometryWithEncoder:(id)a0 BVHBuffer:(id)a1 BVHBufferOffset:(unsigned long long)a2 toBuffer:(id)a3 geometryBufferOffset:(unsigned long long)a4;

@end
