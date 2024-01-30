@protocol MTLCommandQueue, PTAbstractDisparityFilter;

@interface PTDisparityPostProcessing : NSObject {
    id<PTAbstractDisparityFilter> _disparityFilter;
    id<MTLCommandQueue> _commandQueue;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _filteredDisparitySize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparitySize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _colorSize;
}

+ (int)prewarmWithDescriptor:(id)a0;
+ (int)prewarmForMediaserverd;

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (int)computeOpticalFlow:(id)a0 outDisplacement:(id)a1;
- (id)initWithCommandQueue:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 filteredDisparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 disparityPixelFormat:(unsigned long long)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 colorPixelFormat:(unsigned long long)a5 sensorPort:(id)a6;
- (int)temporalDisparityFilter:(id)a0 inStatePrev:(id)a1 inDisparity:(id)a2 outDisparityFiltered:(id)a3 outState:(id)a4;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityFilteredPrev:(id)a2 outDisparityFiltered:(id)a3 disparityBias:(float)a4;

@end
