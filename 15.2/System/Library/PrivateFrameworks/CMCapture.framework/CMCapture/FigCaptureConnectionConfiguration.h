@class FigCaptureVideoThumbnailSinkConfiguration, NSString, FigCaptureSinkConfiguration, FigCaptureVideoPreviewSinkConfiguration, FigCaptureIrisSinkConfiguration, FigCapturePointCloudDataSinkConfiguration, FigCaptureCameraCalibrationDataSinkConfiguration, FigCaptureVideoDataSinkConfiguration, FigCaptureDepthDataSinkConfiguration, FigCaptureStillImageSinkConfiguration, FigCaptureSourceConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying>

@property (copy, nonatomic) NSString *connectionID;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) int underlyingDeviceType;
@property (retain, nonatomic) FigCaptureSourceConfiguration *sourceConfiguration;
@property (retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration;
@property (nonatomic) BOOL enabled;
@property (readonly) FigCaptureIrisSinkConfiguration *irisSinkConfiguration;
@property (readonly) FigCaptureStillImageSinkConfiguration *stillImageSinkConfiguration;
@property (readonly) FigCaptureVideoDataSinkConfiguration *videoDataSinkConfiguration;
@property (readonly) FigCaptureVideoPreviewSinkConfiguration *videoPreviewSinkConfiguration;
@property (readonly) FigCaptureDepthDataSinkConfiguration *depthDataSinkConfiguration;
@property (readonly) FigCaptureVideoThumbnailSinkConfiguration *thumbnailSinkConfiguration;
@property (readonly) FigCapturePointCloudDataSinkConfiguration *pointCloudDataSinkConfiguration;
@property (readonly) FigCaptureCameraCalibrationDataSinkConfiguration *cameraCalibrationDataSinkConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)sourcesFromUnderlyingStream;

@end
