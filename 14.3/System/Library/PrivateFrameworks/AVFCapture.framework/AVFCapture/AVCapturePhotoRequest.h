@class AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, NSArray, AVWeakReferencingDelegateStorage;

@interface AVCapturePhotoRequest : NSObject {
    AVCaptureResolvedPhotoSettings *_resolvedSettings;
}

@property (readonly) unsigned int photoCallbackFlavor;
@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (readonly) AVCapturePhotoSettings *unresolvedSettings;
@property (retain, nonatomic) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly, nonatomic) NSArray *expectedPhotoManifest;
@property (readonly, nonatomic) unsigned long long expectedPhotoCount;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (nonatomic) unsigned long long firedPhotoCallbacksCount;
@property (readonly) BOOL delegateSupportsDebugMetadataSidecarFile;
@property (readonly) BOOL lensStabilizationSupported;
@property (retain, nonatomic) struct __IOSurface { } *previewSurface;
@property (retain, nonatomic) struct opaqueCMSampleBuffer { } *previewSampleBuffer;
@property (retain, nonatomic) struct __IOSurface { } *thumbnailSurface;

+ (void)initialize;
+ (id)requestWithDelegate:(id)a0 settings:(id)a1 lensStabilizationSupported:(BOOL)a2;

- (void)_resolveExpectedPhotoManifest;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 settings:(id)a1 lensStabilizationSupported:(BOOL)a2;

@end
