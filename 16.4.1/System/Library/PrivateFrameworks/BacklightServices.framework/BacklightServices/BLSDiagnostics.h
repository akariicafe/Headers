@class NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BLSDiagnostics : NSObject <BLSDiagnosticFlipbookFrameSurfaceProvider, BLSFlipbookDiagnosticsProviding, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allFlipbookFrames;
- (id)frameWithUUID:(id)a0;
- (id)frameOnGlassNow;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (struct __IOSurface { } *)rawSurfaceForFrame:(id)a0;
- (struct __IOSurface { } *)surfaceForFrame:(id)a0;

@end
