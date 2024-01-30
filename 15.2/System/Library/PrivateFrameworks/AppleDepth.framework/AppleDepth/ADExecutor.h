@class NSString, ADEspressoWrapper;

@interface ADExecutor : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _inputRoi;
    unsigned long long _layout;
    unsigned int _inputOrientation;
    unsigned long long _engineType;
    ADEspressoWrapper *_espressoRunner;
    unsigned long long _rotationPreference;
    long long _rotationConstant;
}

@property (readonly, copy, nonatomic) NSString *networkVersionString;

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfExecutionSteps;
- (long long)prepareForEngineType:(unsigned long long)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 descriptorForROI:(id)a2 exifOrientation:(unsigned int)a3 rotationPreference:(unsigned long long)a4 inferenceDescriptor:(id)a5;
- (long long)solveRotationPreference:(unsigned long long)a0;
- (long long)convertIntrinsicsFrom:(struct __CVBuffer { } *)a0 cropBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 to:(struct __CVBuffer { } *)a2;
- (id)getIntermediates;
- (id)getIntermediateWithName:(id)a0;

@end
