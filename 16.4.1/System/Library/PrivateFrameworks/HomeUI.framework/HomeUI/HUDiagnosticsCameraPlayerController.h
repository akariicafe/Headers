@class AVPlayerViewController, HUDiagnosticsCameraTimelineView, HUClipScrubberDataSource, HFCameraPlaybackEngine, HMCameraProfile, NSString;

@interface HUDiagnosticsCameraPlayerController : NSObject <UIContextMenuInteractionDelegate>

@property (weak, nonatomic) AVPlayerViewController *cameraPlayerViewController;
@property (retain, nonatomic) HUDiagnosticsCameraTimelineView *diagnosticsView;
@property (weak, nonatomic) HUClipScrubberDataSource *clipScrubberDataSource;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)dismissDetailsViewController;
- (void)dismissDiagnosticDetails;
- (void)displayDiagnosticDetails;
- (void)displayTimelapseDetails;
- (id)initWithCameraPlayerViewController:(id)a0 playbackEngine:(id)a1 clipScrubberDataSource:(id)a2 cameraProfile:(id)a3;
- (void)launchPlaybackEngineDiagnosticsView;
- (void)updateWithPlaybackEngine:(id)a0;

@end
