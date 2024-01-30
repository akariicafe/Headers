@class NSArray;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTSDOFPyramid : NSObject {
    id<MTLComputePipelineState> _updateLayer;
    id<MTLComputePipelineState> _initSDOFPyramid;
    id<MTLTexture> _foregroundPyramid;
    id<MTLTexture> _backgroundPyramid;
    NSArray *_foregroundPyramidArray;
    NSArray *_backgroundPyramidArray;
    unsigned long long _maxLevels;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 maxLevels:(unsigned long long)a5 pixelFormat:(unsigned long long)a6;
- (int)updatePyramid:(id)a0 color:(id)a1 disparity:(id)a2 focusDistance:(float)a3 cocFactor:(float)a4;
- (id)foregroundPyramid;
- (id)backgroundPyramid;
- (unsigned long long)maxLevels;

@end
