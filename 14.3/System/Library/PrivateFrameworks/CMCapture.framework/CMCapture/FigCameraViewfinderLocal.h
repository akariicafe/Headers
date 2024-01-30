@class NSString, NSDictionary, FigCameraViewfinderSessionLocal;

@interface FigCameraViewfinderLocal : FigCameraViewfinder <FigCaptureSessionObserver> {
    BOOL _observing;
    NSDictionary *_options;
    FigCameraViewfinderSessionLocal *_activeViewfinderSession;
}

@property (readonly) int photoThumbnailMaxDimension;
@property (readonly) BOOL photoThumbnailQualitySpecified;
@property (readonly) float photoThumbnailQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)cameraViewfinder;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)captureSessionDidStart:(id)a0;
- (void)captureSessionDidStop:(long long)a0;
- (void)startWithOptions:(id)a0;
- (void)captureSession:(long long)a0 didCapturePhotoWithStatus:(int)a1 thumbnailData:(id)a2 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)_updateActiveViewfinderSession:(id)a0;

@end
