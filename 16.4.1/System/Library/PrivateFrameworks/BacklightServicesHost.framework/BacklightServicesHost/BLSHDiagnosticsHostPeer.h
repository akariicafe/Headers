@class NSString, BLSDiagnosticFlipbookFrame, RBSProcessMonitor;
@protocol BLSFlipbookDiagnosticsProviding;

@interface BLSHDiagnosticsHostPeer : NSObject <BLSDiagnosticsXPCHostInterface, BSInvalidatable> {
    id<BLSFlipbookDiagnosticsProviding> _flipbookDiagnosticsProvider;
    RBSProcessMonitor *_processMonitor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BLSDiagnosticFlipbookFrame *_lock_cachedFrameOnGlassNow;
    BLSDiagnosticFlipbookFrame *_lock_cachedLastCancelledFrame;
    int _clientPid;
    BOOL _clientIsTaskScheduled;
    BOOL _valid;
    unsigned long long _entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allFlipbookFrames;
- (id)frameOnGlassNow;
- (BOOL)isValid;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)rawSurfaceForFrameUUID:(id)a0 reply:(id /* block */)a1;
- (void)surfaceForFrameUUID:(id)a0 reply:(id /* block */)a1;
- (id)_lock_validateHostFrame:(id)a0 source:(id)a1;
- (void)genericSurfaceForFrameUUID:(id)a0 reply:(id /* block */)a1 name:(id)a2 surfaceFromFrame:(id /* block */)a3;
- (id)hostFrameForUUID:(id)a0;
- (id)initWithFlipbookDiagnosticsProvider:(id)a0 peer:(id)a1;

@end
