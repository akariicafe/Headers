@interface NUHistogramCalculator : NSObject

@property (nonatomic) long long binCount;
@property (nonatomic) struct { double min; double max; } range;
@property (nonatomic) struct { struct { float r; float g; float b; float a; } r; struct { float r; float g; float b; float a; } g; struct { float r; float g; float b; float a; } b; struct { float r; float g; float b; float a; } a; } colorMatrix;

- (id)init;
- (id)computeHistogramFromBuffer:(id)a0 error:(out id *)a1;
- (id)_computeHistogramForBufferBGRA8:(id)a0 error:(out id *)a1;
- (id)_computeHistogramForBufferRGBAhHLG:(id)a0 error:(out id *)a1;

@end
