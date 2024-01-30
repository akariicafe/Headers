@interface NewsUI2.AudioTrackDetailsViewController : UIViewController <UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ trackView;
    void /* unknown type, empty encoding */ track;
    void /* unknown type, empty encoding */ playbackState;
    void /* unknown type, empty encoding */ listeningProgressManager;
    void /* unknown type, empty encoding */ logoCache;
    void /* unknown type, empty encoding */ artworkCache;
}

- (void)viewDidLoad;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (BOOL)accessibilityPerformEscape;
- (void)didTapCloseButton;
- (void)didTapPlayPauseButton;
- (void)didTapReadButton;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
