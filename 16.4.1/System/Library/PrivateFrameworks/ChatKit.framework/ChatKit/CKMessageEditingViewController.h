@class NSString, CKTranscriptOverlayTransitionContext, UIVisualEffectView, UIView, CKMessageEditingView;
@protocol CKMessageEditingViewControllerInteractionDelegate, CKTranscriptOverlayTransitionDelegate;

@interface CKMessageEditingViewController : UIViewController <CKMessageEditingViewDelegate, CKTranscriptOverlayViewControllerProtocol>

@property (retain, nonatomic) CKTranscriptOverlayTransitionContext *transitionContext;
@property (nonatomic) BOOL isInitialLoad;
@property (nonatomic) BOOL animatingIn;
@property (nonatomic) BOOL animatingOut;
@property (retain, nonatomic) UIVisualEffectView *transcriptOverlayView;
@property (retain, nonatomic) CKMessageEditingView *messageEditingView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editedMessageAchorPosition;
@property (nonatomic) double viewHeightForEditedMessageAnchorPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (weak, nonatomic) id<CKTranscriptOverlayTransitionDelegate> transcriptOverlayTransitionDelegate;
@property (weak, nonatomic) id<CKMessageEditingViewControllerInteractionDelegate> interactionDelegate;
@property (readonly, nonatomic) UIView *balloonViewForAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)keyboardDidHide:(id)a0;
- (void)keyboardDidChangeFrame:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)keyboardWillShow:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)keyboardDidShow:(id)a0;
- (void)_animateIn;
- (void)_animateOutWithState:(long long)a0;
- (unsigned long long)_animationOptionsFromCurve:(long long)a0;
- (void)_handleKeyboardAppearanceNotification:(id)a0;
- (void)_informDelegateOfUpdatedBalloonViewFrame;
- (void)_requestDismissal;
- (void)configureForInitialAppearance;
- (void)dismissAndRejectChanges;
- (void)dismissIfNoChanges;
- (id)initWithTransitionContext:(id)a0;
- (BOOL)messageEditingViewBalloonHasTail;
- (void)messageEditingViewConfirmButtonSelected:(id)a0;
- (void)messageEditingViewDidUpdateBalloonViewContent:(id)a0;
- (void)messageEditingViewDidUpdateBalloonViewFrame:(id)a0;
- (double)messageEditingViewDismissAnimationBalloonMaxWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })messageEditingViewDismissAnimationContentInsets;
- (void)messageEditingViewRejectButtonSelected:(id)a0;
- (void)transcriptOverlayTapGestureRecognized:(id)a0;

@end
