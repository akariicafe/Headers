@class HUDiagnosticsCameraTimelineView, HUClipScrubberDataSource, HUCameraPlayerViewController, HMCameraProfile, NSString;

@interface HUDiagnosticsCameraPlayerController : NSObject <UIContextMenuInteractionDelegate>

@property (weak, nonatomic) HUCameraPlayerViewController *cameraPlayerViewController;
@property (retain, nonatomic) HUDiagnosticsCameraTimelineView *diagnosticsView;
@property (weak, nonatomic) HUClipScrubberDataSource *clipScrubberDataSource;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateWithPlaybackEngine:(id)a0;
- (void)launchPlaybackEngineDiagnosticsView;
- (void)displayDiagnosticDetails;
- (void)dismissDiagnosticDetails;
- (id)initWithCameraPlayerViewController:(id)a0 clipScrubberDataSource:(id)a1 cameraProfile:(id)a2;

@end
