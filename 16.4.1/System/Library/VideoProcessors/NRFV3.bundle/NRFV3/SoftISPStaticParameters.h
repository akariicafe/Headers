@class NSDictionary;

@interface SoftISPStaticParameters : NSObject {
    NSDictionary *_cameraInfoByPortType;
    NSDictionary *_tuningParameters;
}

- (void).cxx_destruct;
- (int)_generateSoftISPTuningParameters;
- (id)cameraInfoForInputFrameMetadata:(id)a0;
- (union { struct { unsigned int x0; unsigned int x1; } x0; })dimensionsForSensorInBayerPixelsInMetadata:(id)a0;
- (union { struct { unsigned int x0; unsigned int x1; } x0; })dimensionsForSensorInMetadata:(id)a0;
- (int)firstPixelForSensorID:(unsigned short)a0;
- (id)initCameraInfoByPortType:(id)a0 tuningParameters:(id)a1;
- (id)moduleConfigForInputFrameMetadata:(id)a0;
- (id)tuningParametersForInputFrameMetadata:(id)a0 tuningType:(int)a1;

@end
