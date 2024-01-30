@class NSObject, NSString, NSMapTable, FigStateMachine, FigNSXPCConnection;
@protocol OS_dispatch_queue, FigCameraViewfinderRemoteObject;

@interface FigCameraViewfinderRemote : FigCameraViewfinder <FigCameraViewfinderRemoteObjectCallbacks> {
    NSMapTable *_weakSessionTable;
    FigStateMachine *_stateMachine;
    FigNSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionManagementQueue;
    id<FigCameraViewfinderRemoteObject> _remoteViewfinder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)cameraViewfinder;
+ (id)remoteObjectCallbacksInterface;

- (void)viewfinderSession:(long long)a0 previewStreamDidCloseWithStatus:(int)a1;
- (void)viewfinderSessionWillBegin;
- (void)viewfinderSessionDidBegin:(id)a0 withIdentifier:(long long)a1;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void)viewfinderSession:(long long)a0 didCapturePhotoWithStatus:(int)a1 thumbnailData:(id)a2 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)viewfinderSessionPreviewStreamDidOpen:(long long)a0;
- (void)startWithOptions:(id)a0;
- (void)viewfinderSessionDidEnd;

@end
