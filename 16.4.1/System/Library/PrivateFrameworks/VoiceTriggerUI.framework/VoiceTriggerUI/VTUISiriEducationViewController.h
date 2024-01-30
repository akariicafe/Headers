@class AVPlayerViewController, AVPlayerLooper, VTUIStyle, AVPlayer;
@protocol VTUISiriEducationViewControllerDelegate;

@interface VTUISiriEducationViewController : OBWelcomeController {
    VTUIStyle *_style;
    id<VTUISiriEducationViewControllerDelegate> _delegate;
    AVPlayerViewController *_playerViewController;
    AVPlayerLooper *_playerLooper;
    AVPlayer *_player;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_continueButtonPressed;
- (void)_setupContinueButton;
- (void)_fadeInSubViews;
- (void)_setupImageContainerViewForTraitCollection:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 style:(id)a2 delegate:(id)a3;

@end
