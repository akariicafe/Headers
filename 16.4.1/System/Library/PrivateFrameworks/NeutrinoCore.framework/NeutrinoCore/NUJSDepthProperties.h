@class NUJSCGImageMetadata, NUJSAVCameraCalibrationData;
@protocol NUAuxiliaryImageProperties;

@interface NUJSDepthProperties : NUJSProxy <NUJSDepthPropertiesExport>

@property (readonly) id<NUAuxiliaryImageProperties> depthProperties;
@property (readonly) NUJSAVCameraCalibrationData *cameraCalibrationData;
@property (readonly) NUJSCGImageMetadata *depthMetaData;

- (id)initWithDepthProperties:(id)a0 context:(id)a1;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
