@class NSObject, FigDelegateStorage, FigCameraViewfinderSession;
@protocol FigCameraViewfinderDelegate, OS_dispatch_queue, FigCameraViewfinderSessionDelegate;

@interface FigCameraViewfinder : NSObject {
    FigDelegateStorage *_delegateStorage;
}

@property (retain, nonatomic) FigCameraViewfinderSession *delegateActiveViewfinderSession;
@property (readonly) id<FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)cameraViewfinder;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)startWithOptions:(id)a0;

@end
