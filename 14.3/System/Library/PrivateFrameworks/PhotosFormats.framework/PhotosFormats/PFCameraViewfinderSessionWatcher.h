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

@end
