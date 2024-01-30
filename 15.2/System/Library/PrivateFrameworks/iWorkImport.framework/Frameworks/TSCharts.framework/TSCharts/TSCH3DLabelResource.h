@class TSCH3DLabelResourceAttributes;

@interface TSCH3DLabelResource : TSCH3DResource <TSCH3DStringIndexableResource> {
    BOOL _sizeAndOffsetCalculated;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _tightSize;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _size;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _labelRenderOffset;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _bitmapLabelRenderOffset;
}

@property (readonly, nonatomic) struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } bitmapLabelRenderOffset;
@property (readonly, nonatomic) struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } labelSize;
@property (readonly, nonatomic) struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } tightSize;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } clampedLabelSampledSize;
@property (readonly, nonatomic) struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } labelRenderOffset;
@property (copy, nonatomic) TSCH3DLabelResourceAttributes *attributes;

+ (id)resourceWithLabelAttributes:(id)a0;

- (id)get;
- (void)setString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id).cxx_construct;
- (id)initWithLabelAttributes:(id)a0;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })p_clampedLabelSampledSizeReturningClampedRatio:(float *)a0;
- (void)p_calculateSizeAndOffset;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })labelSizeWithSamples:(double)a0;

@end
