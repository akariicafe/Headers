@class NSArray, CIVector, CIImage, NSNumber;

@interface RAWConvert : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSArray *inputNeutral;
    NSNumber *inputRange;
    NSNumber *inputFactor;
    NSNumber *inputCalibrationIlluminant1;
    NSNumber *inputCalibrationIlluminant2;
    NSArray *inputXYZtoCamera1;
    NSArray *inputXYZtoCamera2;
    NSArray *inputCameraCalibration1;
    NSArray *inputCameraCalibration2;
    NSArray *inputReduction1;
    NSArray *inputReduction2;
    NSArray *inputForwardMatrix1;
    NSArray *inputForwardMatrix2;
    NSNumber *inputShouldUseForwardMatrix;
    NSNumber *inputShouldRecoverHighlights;
    NSNumber *inputShouldLinearize;
    CIVector *inputBlacks;
}

@property (readonly, nonatomic) struct CCameraProfile { void /* function */ **x0; int x1; int x2; struct CMatrix { unsigned int x0; unsigned int x1; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x2; } x3; struct CMatrix { unsigned int x0; unsigned int x1; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x2; } x4; struct CMatrix { unsigned int x0; unsigned int x1; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x2; } x5; struct CMatrix { unsigned int x0; unsigned int x1; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x2; } x6; struct CMatrix { unsigned int x0; unsigned int x1; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x2; } x7; struct CMatrix { unsigned int x0; unsigned int x1; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x2; } x8; unsigned short x9; struct CMatrix { unsigned int x0; unsigned int x1; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x2; } x10; struct CMatrix { unsigned int x0; unsigned int x1; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x2; } x11; } cameraProfile;

+ (id)customAttributes;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)outputImage;
- (id)customAttributes;
- (void).cxx_destruct;
- (id)blendFactor;
- (void)setInputNeutral:(id)a0;
- (id)inputNeutralXY;
- (struct CMatrix { unsigned int x0; unsigned int x1; struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; } x2; })matrixFromArray:(id)a0 rowCount:(unsigned long long)a1 columnCount:(unsigned long long)a2;
- (struct CWhitePoint { double x0; double x1; })neutralWhitePointWithProfile:(void *)a0;
- (id)outputMatrix;

@end
