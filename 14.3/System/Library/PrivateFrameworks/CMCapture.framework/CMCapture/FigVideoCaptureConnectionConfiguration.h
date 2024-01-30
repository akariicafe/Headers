@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (readonly) BOOL previewDepthFilterRenderingEnabled;
@property (readonly) BOOL previewDepthDataDeliveryEnabled;
@property (readonly) BOOL previewFilterRenderingEnabled;
@property (readonly) BOOL irisVISEnabled;
@property (readonly) int irisVISMethod;
@property (readonly) BOOL irisSDOFEnabled;
@property (readonly) struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; } transform;
@property (nonatomic) int outputFormat;
@property (nonatomic) int outputWidth;
@property (nonatomic) int outputHeight;
@property (nonatomic) int videoStabilizationMethod;
@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) BOOL physicalMirroringForMovieRecordingEnabled;
@property (nonatomic) int orientation;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled;
@property (nonatomic) BOOL livePhotoMetadataWritingEnabled;

+ (int)videoStabilizationMethod:(id)a0;
+ (BOOL)cameraIntrinsicMatrixDeliveryEnabled:(id)a0 doingFaceTracking:(BOOL)a1;
+ (BOOL)physicalMirroringForMovieRecordingEnabled:(id)a0;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })depthDataTransformWithSourceDimensions;
- (struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })depthDataTransform;
- (BOOL)requiresScalingForInputTransForm:(struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })a0 nodeName:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })_transformWithSourceDimensions:(struct { int x0; int x1; })a0 forceSourceDimensions:(BOOL)a1;

@end
