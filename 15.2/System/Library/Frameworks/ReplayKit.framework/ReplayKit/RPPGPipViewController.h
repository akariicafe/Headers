@class NSString, CALayer, AVConferencePreview, PGPictureInPictureProxy;

@interface RPPGPipViewController : UIViewController <AVConferencePreviewClientDelegate, PGPictureInPictureProxyDelegate> {
    CALayer *_previewLayer;
    AVConferencePreview *_preview;
    PGPictureInPictureProxy *_pegasusProxy;
    BOOL _isRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPreview;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)didStartPreview;
- (void)didPausePreview;
- (void)didStopPreview;
- (void)didChangeLocalVideoAttributes:(id)a0;
- (void)didChangeLocalScreenAttributes:(id)a0;
- (void)cameraDidBecomeAvailableForUniqueID:(id)a0;
- (void)cameraDidBecomeInterruptedForForUniqueID:(id)a0 reason:(long long)a1;
- (id)cameraWithPosition:(long long)a0;
- (void)updateViewGeometry;
- (void)stopPipSession;
- (void)layoutPreviewLayer;
- (void)startPipSession;

@end
