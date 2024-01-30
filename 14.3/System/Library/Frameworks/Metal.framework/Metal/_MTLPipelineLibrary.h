@class NSString, NSArray;
@protocol MTLDevice, MTLPipelineCache;

@interface _MTLPipelineLibrary : _MTLObjectWithLabel <MTLPipelineLibrarySPI> {
    struct PipelineLibraryData { struct shared_ptr<MTLPipelineDescriptions> { struct MTLPipelineDescriptions *x0; struct __shared_weak_count *x1; } x0; id x1; id x2; } *_pipelineLibraryData;
}

@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSArray *pipelineNames;
@property BOOL disableRunTimeCompilation;
@property (readonly, nonatomic) id<MTLPipelineCache> pipelineCache;
@property (readonly, nonatomic) id<MTLPipelineCache> functionCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newRenderPipelineStateWithName:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)functionCache;
- (id)pipelineCache;
- (void)dealloc;
- (id)newComputePipelineStateWithName:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3;
- (id)initWithDevice:(id)a0 pipelineLibraryData:(struct PipelineLibraryData { struct shared_ptr<MTLPipelineDescriptions> { struct MTLPipelineDescriptions *x0; struct __shared_weak_count *x1; } x0; id x1; id x2; } *)a1;
- (id)newRenderPipelineDescriptorWithName:(id)a0 error:(id *)a1;
- (id)newComputePipelineDescriptorWithName:(id)a0 error:(id *)a1;

@end
