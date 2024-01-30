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

- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)canDismissPresentedContent;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)firstResponder;
- (void)setContentModuleContext:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)shortcutDidChangeSize:(id)a0;
- (void)haccIconButtonTapped;
- (void)pauseSoundRecognitionIfNecessary;
- (void)restartSoundRecognitionIfNecessary;
- (id)shortcutViewController;

@end
