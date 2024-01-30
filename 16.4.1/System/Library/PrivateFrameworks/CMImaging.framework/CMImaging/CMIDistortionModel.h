@interface CMIDistortionModel : NSObject {
    float _inverseScalingLUT[257];
}

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ pixelPitch; void /* unknown type, empty encoding */ distortionCenter; float inverseScalingLUTBinSizeRecip; float radiusScalingNormFactor; float forwardCoefficients[8]; float inverseCoefficients[8]; } gdcParams;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustCropRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withGDCParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a1;
+ (int)getGDCParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a0 cameraInfo:(id)a1 metadata:(id)a2;
+ (int)generateInverseScalingLUT:(float *)a0 withGDCParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a1;
+ (int)generateInverseScalingLUT:(id *)a0 withGDCParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a1 metalCtx:(id)a2;

- (id)initWithGDCParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a0;

@end
