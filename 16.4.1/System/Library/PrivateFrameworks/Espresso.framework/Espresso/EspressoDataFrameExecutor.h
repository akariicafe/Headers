@class NSArray;

@interface EspressoDataFrameExecutor : NSObject {
    struct vector<void *, std::allocator<void *>> { void **__begin_; void **__end_; struct __compressed_pair<void **, std::allocator<void *>> { void **__value_; } __end_cap_; } pointers_to_free;
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> { struct __CVBuffer **__begin_; struct __CVBuffer **__end_; struct __compressed_pair<__CVBuffer **, std::allocator<__CVBuffer *>> { struct __CVBuffer **__value_; } __end_cap_; } pixelbuffers_to_release;
}

@property (retain) NSArray *outputMatchingBuffers;
@property (nonatomic) int use_cvpixelbuffer;

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (int)bindOutputsFromFrame:(id)a0 toNetwork:(struct { void *x0; int x1; })a1;
- (int)bindInput:(id)a0 fromImageAttachment:(id)a1 toNetwork:(struct { void *x0; int x1; })a2;
- (int)bindInput:(id)a0 fromTensorAttachment:(id)a1 toNetwork:(struct { void *x0; int x1; })a2;
- (int)bindInputsFromFrame:(id)a0 toNetwork:(struct { void *x0; int x1; })a1;
- (int)bindOutputsFromFrame:(id)a0 toNetwork:(struct { void *x0; int x1; })a1 executionStatus:(int)a2;
- (int)bindOutputsFromFrame:(id)a0 toNetwork:(struct { void *x0; int x1; })a1 referenceNetwork:(struct { void *x0; int x1; })a2;
- (void)freeTemporaryResources;
- (BOOL)useCVPixelBuffers;
- (BOOL)useCVPixelBuffersForOutputs:(BOOL)a0;

@end
