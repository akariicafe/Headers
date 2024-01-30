@class HACCIconViewController, NSString, UIViewPropertyAnimator, HACCShortcutViewController;

@interface HACCModuleViewController : UIViewController <HACCIconViewControllerDelegate, AXHAShortcutUpdateProtocol, CCUIContentModuleContentViewController> {
    HACCShortcutViewController *_shortcutController;
    HACCIconViewController *_iconController;
    BOOL _expanded;
    BOOL _pausedSoundRecognition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (BOOL)canDismissPresentedContent;
- (id)init;
- (void).cxx_destruct;
- (void)setContentModuleContext:(id)a0;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)firstResponder;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)shortcutDidChangeSize:(id)a0;
- (id)shortcutViewController;
- (void)pauseSoundRecognitionIfNecessary;
- (void)restartSoundRecognitionIfNecessary;
- (void)haccIconButtonTapped;

@end
