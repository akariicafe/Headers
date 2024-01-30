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
- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setContentModuleContext:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)firstResponder;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)shortcutDidChangeSize:(id)a0;
- (id)shortcutViewController;
- (void)pauseSoundRecognitionIfNecessary;
- (void)restartSoundRecognitionIfNecessary;
- (void)haccIconButtonTapped;

@end
