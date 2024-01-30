@class NSData, NSDictionary;

@interface AVCameraCalibrationDataInternal : NSObject {
    struct { void /* unknown type, empty encoding */ columns[3]; } intrinsicMatrix;
    struct CGSize { double width; double height; } intrinsicMatrixReferenceDimensions;
    struct { void /* unknown type, empty encoding */ columns[4]; } extrinsicMatrix;
    float pixelSize;
    NSData *lensDistortionCoefficients;
    NSData *inverseLensDistortionCoefficients;
    struct CGPoint { double x; double y; } lensDistortionCenter;
    NSData *lensDistortionLookupTable;
    NSData *inverseLensDistortionLookupTable;
    NSDictionary *cameraCalibrationDataDictionary;
}

@end
