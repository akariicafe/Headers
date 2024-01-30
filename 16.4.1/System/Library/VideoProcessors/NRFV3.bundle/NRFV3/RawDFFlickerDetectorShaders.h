@protocol MTLComputePipelineState;

@interface RawDFFlickerDetectorShaders : NSObject {
    id<MTLComputePipelineState> _detectFlicker;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
