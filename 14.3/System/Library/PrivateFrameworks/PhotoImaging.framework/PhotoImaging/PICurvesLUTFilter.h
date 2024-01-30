@class NSArray;

@interface PICurvesLUTFilter : CIFilter

@property (retain) NSArray *inputPointsR;
@property (retain) NSArray *inputPointsG;
@property (retain) NSArray *inputPointsB;
@property (retain) NSArray *inputPointsL;

+ (id)tableImageFromRed:(const float *)a0 green:(const float *)a1 blue:(const float *)a2 luminance:(const float *)a3;
+ (struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; })calculateCurveTable:(id)a0;
+ (id)curvePointsFromDictionaries:(id)a0;

- (void).cxx_destruct;
- (id)outputImage;

@end
