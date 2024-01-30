@class NSString, ADEspressoRunner;

@interface ADExecutor : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _inputRoi;
    unsigned long long _layout;
    unsigned int _inputOrientation;
    unsigned long long _engineType;
    ADEspressoRunner *_espressoRunner;
    unsigned long long _rotationPreference;
    long long _rotationConstant;
}

@property (readonly, copy, nonatomic) NSString *networkVersionString;

- (id)init;
- (void).cxx_destruct;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exifOrientation:(unsigned int)a2 rotationPreference:(unsigned long long)a3 inferenceDescriptor:(id)a4;
- (long long)numberOfExecutionSteps;
- (long long)solveRotationPreference:(unsigned long long)a0;
- (BOOL)isLandscape:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getIntermediates;
- (long long)convertIntrensicsFrom:(struct __CVBuffer { } *)a0 cropBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 to:(struct __CVBuffer { } *)a2;
- (id)getIntermediateWithName:(id)a0;

@end
