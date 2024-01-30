@class NSString, FigCameraViewfinder;
@protocol PFCameraViewfinderSessionWatcherDelegate;

@interface PFCameraViewfinderSessionWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    FigCameraViewfinder *_viewFinder;
    BOOL _isCameraRunning;
}

@property (readonly) BOOL isCameraRunning;
@property (readonly, weak) id<PFCameraViewfinderSessionWatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraViewfinder:(id)a0 viewfinderSessionDidEnd:(id)a1;
- (void)cameraViewfinder:(id)a0 viewfinderSessionDidBegin:(id)a1;
- (void).cxx_destruct;
- (void)stopWatching;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)a0 delegate:(id)a1;

@end
