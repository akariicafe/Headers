@class NSData, ADMutableCameraCalibration;

@interface JDCameraCalibrationData : NSObject <NSCopying, NSMutableCopying> {
    ADMutableCameraCalibration *_internal;
}

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } intrinsicMatrix;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } referenceDimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } cameraToPlatformTransform;
@property (readonly, nonatomic) float pixelSize;
@property (readonly, nonatomic) int distortionModel;
@property (readonly, nonatomic) NSData *distortedRadii;
@property (readonly, nonatomic) NSData *undistortedRadii;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } lensDistortionCenter;
@property (readonly, nonatomic) const struct JDGDCPolynomials { float x0[8]; float x1[8]; } *distortionPolynomials;

+ (id)makeWithDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)internalCalib;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getTransformationTo:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getCameraToPlatformForTransformation:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)getInternalCalib;

@end
