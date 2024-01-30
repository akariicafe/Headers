@class NSArray, NSString, NSData, NSMutableDictionary, NSObject, MTLLoadedFile;
@protocol OS_dispatch_queue, MTLDevice;

@interface _MTLBinaryArchive : _MTLObjectWithLabel <MTLBinaryArchiveSPI> {
    MTLLoadedFile *_fileMapping;
    NSData *_fileData;
    NSObject<OS_dispatch_queue> *_queue;
    struct map<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long>, CompareHash, std::__1::allocator<std::__1::pair<const MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> > > > { struct __tree<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, std::__1::__map_value_compare<MTLUINT256_t, std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, CompareHash, true>, std::__1::allocator<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<MTLUINT256_t, std::__1::__value_type<MTLUINT256_t, std::__1::pair<unsigned int, unsigned long long> >, CompareHash, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _fileIndex;
    NSMutableDictionary *_entries;
    struct unique_ptr<MTLPipelineCollection, std::__1::default_delete<MTLPipelineCollection> > { struct __compressed_pair<MTLPipelineCollection *, std::__1::default_delete<MTLPipelineCollection> > { struct MTLPipelineCollection *__value_; } __ptr_; } _pipelineCollection;
    BOOL _collectArchives;
}

@property (readonly) unsigned long long options;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deserializeBinaryArchiveHeader:(struct { BOOL x0; BOOL x1; unsigned long long x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *)a0 fileData:(id)a1 device:(id)a2;
+ (BOOL)deserializeBinaryArchiveDescriptorMachO:(struct { BOOL x0; BOOL x1; unsigned long long x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *)a0 fileData:(id)a1;
+ (id)descriptorDataForArchive:(id)a0;

- (id)formattedDescription:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithOptions:(unsigned long long)a0 device:(id)a1 url:(id)a2 error:(id *)a3;
- (id)materializeFromFileOffset:(unsigned long long)a0 hash:(struct { unsigned char x0[32]; } *)a1;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)serializeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)materializeAll;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)materializeFromHash:(struct { unsigned char x0[32]; } *)a0;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)serializeToURL:(id)a0 error:(id *)a1;
- (id)getBinaryDataForKey:(id)a0;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (void)addBinaryEntry:(id)a0 forKey:(id)a1;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 error:(id *)a2;
- (BOOL)removeComputePipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;

@end
