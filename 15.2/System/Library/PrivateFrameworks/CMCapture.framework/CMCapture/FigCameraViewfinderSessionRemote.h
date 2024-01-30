@class FigStateMachine;
@protocol FigCameraViewfinderSessionRemoteObject;

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {
    id<FigCameraViewfinderSessionRemoteObject> _remoteViewfinderSession;
    unsigned int _state;
    FigStateMachine *_stateMachine;
}

- (void)openPreviewStreamWithOptions:(id)a0;
- (void)_serverDied;
- (void)_previewStreamDidCloseWithStatus:(int)a0;
- (void)closePreviewStream;
- (void)_previewStreamDidOpen;
- (id)_initWithRemoteViewfinderSession:(id)a0 delegateStorage:(id)a1;
- (void)_clientDisconnectedFromServer;
- (void)dealloc;

@end
