@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FigCameraViewfinderServer : NSObject <NSXPCListenerDelegate, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    NSXPCListener *_serviceListener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)start;

- (void)cameraViewfinderSessionPreviewStreamDidOpen:(id)a0;
- (void)cameraViewfinder:(id)a0 viewfinderSessionDidEnd:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)cameraViewfinder:(id)a0 viewfinderSessionDidBegin:(id)a1;
- (void)cameraViewfinderSession:(id)a0 previewStreamDidCloseWithStatus:(int)a1;
- (id)init;
- (void)cameraViewfinderSession:(id)a0 didCapturePhotoWithStatus:(int)a1 thumbnailData:(id)a2 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)dealloc;

@end
