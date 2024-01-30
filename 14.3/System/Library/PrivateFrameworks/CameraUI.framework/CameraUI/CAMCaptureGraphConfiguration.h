@class NSArray, CAMVideoThumbnailOutputConfiguration;

@interface CAMCaptureGraphConfiguration : NSObject

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long devicePosition;
@property (readonly, nonatomic) long long device;
@property (readonly, nonatomic) long long videoConfiguration;
@property (readonly, nonatomic) long long audioConfiguration;
@property (readonly, nonatomic) unsigned long long previewConfiguration;
@property (readonly, nonatomic) long long previewSampleBufferVideoFormat;
@property (readonly, nonatomic) NSArray *previewFilters;
@property (readonly, nonatomic) CAMVideoThumbnailOutputConfiguration *videoThumbnailOutputConfiguration;
@property (readonly, nonatomic) long long photoEncodingBehavior;
@property (readonly, nonatomic) long long videoEncodingBehavior;
@property (readonly, nonatomic) BOOL enableAutoFPSVideo;
@property (readonly, nonatomic, getter=isVideoHDRSuspended) BOOL videoHDRSuspended;
@property (readonly, nonatomic) long long aspectRatioCrop;
@property (readonly, nonatomic) long long photoQualityPrioritization;
@property (readonly, nonatomic) BOOL enableHDR10BitVideoIfSupported;
@property (readonly, nonatomic, getter=isCaptureMirrored) BOOL captureMirrored;
@property (readonly, nonatomic) BOOL enableRAWCaptureIfSupported;
@property (readonly, nonatomic) BOOL enableContentAwareDistortionCorrection;
@property (readonly, nonatomic) BOOL enableResponsiveShutter;

- (void).cxx_destruct;
- (id)initWithCaptureMode:(long long)a0 captureDevice:(long long)a1 videoConfiguration:(long long)a2 audioConfiguration:(long long)a3 previewConfiguration:(unsigned long long)a4 previewSampleBufferVideoFormat:(long long)a5 previewFilters:(id)a6 videoThumbnailOutputConfiguration:(id)a7 photoEncodingBehavior:(long long)a8 videoEncodingBehavior:(long long)a9 enableAutoFPSVideo:(BOOL)a10 videoHDRSuspended:(BOOL)a11 aspectRatioCrop:(long long)a12 photoQualityPrioritization:(long long)a13 enableHDR10BitVideoIfSupported:(BOOL)a14 captureMirrored:(BOOL)a15 enableRAWCaptureIfSupported:(BOOL)a16 enableContentAwareDistortionCorrection:(BOOL)a17 enableResponsiveShutter:(BOOL)a18;
- (id)shortDescription;
- (id)description;
- (id)completeDescription;

@end
