@class NSData, AVCameraCalibrationDataInternal;

@interface AVCameraCalibrationData : NSObject {
    AVCameraCalibrationDataInternal *_internal;
}

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } intrinsicMatrix;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicMatrixReferenceDimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } extrinsicMatrix;
@property (readonly, nonatomic) float pixelSize;
@property (readonly, nonatomic) NSData *lensDistortionLookupTable;
@property (readonly, nonatomic) NSData *inverseLensDistortionLookupTable;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } lensDistortionCenter;

- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (id)_initEmpty;
- (id)cameraCalibrationDataDictionary;
- (id)_distortionLookupTableFromCoefficients:(id)a0 distortionCenter:(struct CGPoint { double x0; double x1; })a1 pixelSize:(float)a2 referenceDimensions:(struct CGSize { double x0; double x1; })a3 lookupTableLength:(int)a4;
- (id)cameraCalibrationDataWithExifOrientation:(unsigned int)a0;
- (struct CGImageMetadata { } *)copyAuxiliaryMetadata;
- (id)initWithAuxiliaryMetadata:(struct CGImageMetadata { } *)a0;
- (id)initWithCameraCalibrationDataDictionary:(id)a0 error:(id *)a1;
- (id)initWithDepthMetadataDictionary:(id)a0;

@end
