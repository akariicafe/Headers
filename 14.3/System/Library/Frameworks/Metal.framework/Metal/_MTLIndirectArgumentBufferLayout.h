@protocol MTLDeviceSPI;

@interface _MTLIndirectArgumentBufferLayout : NSObject {
    struct _MTLIndirectArgumentBufferLayoutPrivate { id x0; struct unordered_map<unsigned long, _MTLIndirectArgumentBufferLayout *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, _MTLIndirectArgumentBufferLayout *> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::hash<unsigned long>, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::equal_to<unsigned long>, true> > { float x0; } x3; } x0; } x1; } *_private;
}

@property (readonly) BOOL bufferLayoutMatchesFrontEndLayout;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned int hashValue;
@property (readonly) unsigned int hashOffset;
@property (readonly) unsigned int hashMask;
@property (readonly) unsigned int hashSignature;
@property (readonly, nonatomic) id<MTLDeviceSPI> device;

- (unsigned long long)alignment;
- (id)init;
- (void)dealloc;
- (unsigned long long)encodedLength;
- (void)setStructType:(id)a0 withDevice:(id)a1;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (BOOL)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)a0;
- (unsigned long long)uniqueIdentifierForVisibleFunctionTableAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)a0 inIndirectArgumentBuffer:(id)a1 atOffset:(unsigned long long)a2;
- (id)bufferLayoutForResourceAtIndex:(unsigned long long)a0;

@end
