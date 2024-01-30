@interface JDDynamicDistortionCameraCalibrationData : JDMutableCameraCalibrationData {
    struct JDGDCPolynomials { float forwardOrders[8]; float inverseOrders[8]; } _gdcBase;
    struct JDGDCPolynomials { float forwardOrders[8]; float inverseOrders[8]; } _gdcDynamic;
    float _rawSensorPixelSize;
}

- (id)initWithPixelSize:(float)a0 gdcModel:(id)a1 cameraToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (BOOL)pointFromMetadataField:(id)a0 key:(id)a1 point:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)rectFromMetadataField:(id)a0 key:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (BOOL)updateForFrameWithDimensions:(struct CGSize { double x0; double x1; })a0 metadataDictionary:(id)a1;

@end
