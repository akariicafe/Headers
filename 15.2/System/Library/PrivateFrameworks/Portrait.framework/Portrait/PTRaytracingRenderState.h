@class NSString, PTSDOFPyramid;
@protocol MTLComputePipelineState, MTLBuffer;

@interface PTRaytracingRenderState : NSObject <PTRenderState> {
    BOOL _enablePyramid;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLBuffer> rays;
@property int raymarchSteps;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (copy, nonatomic) NSString *description;
@property (retain, nonatomic) PTSDOFPyramid *SDOFpyramid;
@property (readonly) int quality;
@property (nonatomic) float focalLenIn35mmFilm;
@property (nonatomic) int conversionGain;
@property (nonatomic) int readNoise_1x;
@property (nonatomic) int readNoise_8x;
@property (nonatomic) int rawSensorHeight;
@property (nonatomic) int rawSensorWidth;
@property (nonatomic) void /* unknown type, empty encoding */ visCropFactor;
@property (nonatomic) int sensorID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalSensorCrop;
@property (nonatomic) int sourceColorBitDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

@end
