@class FigStateMachine;
@protocol FigCameraViewfinderSessionRemoteObject;

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {
    id<FigCameraViewfinderSessionRemoteObject> _remoteViewfinderSession;
    unsigned int _state;
    FigStateMachine *_stateMachine;
}

- (void)dealloc;
- (id)_initWithRemoteViewfinderSession:(id)a0 delegateStorage:(id)a1;
- (void)closePreviewStream;
- (void)_previewStreamDidCloseWithStatus:(int)a0;
- (void)openPreviewStreamWithOptions:(id)a0;
- (void)_clientDisconnectedFromServer;
- (void)_setupStateMachine;
- (void)_serverDied;
- (void)_previewStreamDidOpen;

@end
