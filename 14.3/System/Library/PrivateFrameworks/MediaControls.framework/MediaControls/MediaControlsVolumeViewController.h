@class UIWindowScene, NSString, NSArray, MediaControlsVolumeController, CALayer, UIViewPropertyAnimator, MediaControlsVolumeSliderView;
@protocol MediaControlsVolumeViewControllerDelegate;

@interface MediaControlsVolumeViewController : UIViewController <MediaControlsVolumeControllerObserver, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController> {
    MediaControlsVolumeSliderView *_primarySlider;
    MediaControlsVolumeSliderView *_secondarySlider;
    NSString *_packageName;
    BOOL _isExpanded;
}

@property (weak, nonatomic) id<MediaControlsVolumeViewControllerDelegate> delegate;
@property (retain, nonatomic) MediaControlsVolumeController *volumeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly, nonatomic) CALayer *punchOutRootLayer;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_dismissMediaControlsVolumeViewController;
- (void)_primarySliderValueDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)mediaControlsVolumeController:(id)a0 didChangeUserInteractionEnabled:(BOOL)a1 forRoute:(long long)a2;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)mediaControlsVolumeController:(id)a0 didUpdateSplitRoute:(BOOL)a1;
- (void)_performWithoutAnimationWhileHidden:(id /* block */)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryFrame;
- (void)_secondarySliderValueDidChange:(id)a0;
- (void)_updateVisibility;
- (void)_updateGlyphPackageDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })secondaryFrame;
- (void)mediaControlsVolumeController:(id)a0 didChangeVolumeAvailable:(BOOL)a1 effectiveVolume:(float)a2 forRoute:(long long)a3;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
