@class FigStateMachine;
@protocol FigCameraViewfinderSessionRemoteObject;

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {
    id<FigCameraViewfinderSessionRemoteObject> _remoteViewfinderSession;
    unsigned int _state;
    FigStateMachine *_stateMachine;
}

- (void)_serverDied;
- (void)_clientDisconnectedFromServer;
- (void)_previewStreamDidOpen;
- (void)closePreviewStream;
- (void)dealloc;
- (void)_previewStreamDidCloseWithStatus:(int)a0;
- (void)openPreviewStreamWithOptions:(id)a0;
- (id)_initWithRemoteViewfinderSession:(id)a0 delegateStorage:(id)a1;

@end
