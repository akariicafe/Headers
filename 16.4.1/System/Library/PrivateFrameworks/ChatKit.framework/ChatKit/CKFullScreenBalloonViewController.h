@class CKMessagePartChatItem, NSString, CKMessageAcknowledgmentPickerBarViewController, UIView, UIGestureRecognizer, UIButton;
@protocol CKFullScreenBalloonViewControllerDelegate;

@interface CKFullScreenBalloonViewController : UIViewController <CKMessageAcknowledgmentPickerBarDelegate, UIGestureRecognizerDelegate, CKAdaptivePresentedControllerProtocol>

@property (retain, nonatomic) UIGestureRecognizer *tapRecognizer;
@property (readonly, weak, nonatomic) id<CKFullScreenBalloonViewControllerDelegate> delegate;
@property (readonly, nonatomic) CKMessageAcknowledgmentPickerBarViewController *pickerBar;
@property (retain, nonatomic) UIButton *replyButton;
@property (readonly, nonatomic) UIView *tintView;
@property (retain, nonatomic) UIView *keyboardSnapshotView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gradientFrame;
@property (readonly, nonatomic) BOOL isGroupConversation;
@property (readonly, nonatomic) UIView *balloonWrapperView;
@property (readonly, nonatomic) CKMessagePartChatItem *chatItem;
@property (retain, nonatomic) CKMessagePartChatItem *supplementaryLayoutChatItem;
@property (retain, nonatomic) id supplementaryLayoutContext;
@property (nonatomic) char forcedOrientation;
@property (nonatomic) BOOL useForcedOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL wantsWindowedPresentation;
@property (nonatomic) BOOL preserveModalPresentationStyle;
@property (nonatomic) BOOL shouldHidePresentingWindow;

- (BOOL)shouldAutorotate;
- (BOOL)gestureRecognizer:(id)a0 shouldReceivePress:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_performClosingAnimationsAnimated:(BOOL)a0 withSendAnimation:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)addTapRecognizerWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)constrainToPresentingVCBounds;
- (void)dismissImmediatelyWithNoAnimations;
- (void)dismissTapGestureRecognized:(id)a0;
- (BOOL)forceWindowedPresentation;
- (id)initWithChatItem:(id)a0 gradientReferenceView:(id)a1 isGroupConversation:(BOOL)a2 delegate:(id)a3;
- (void)messageAcknowledgmentPickerViewController:(id)a0 didPickAcknowledgment:(long long)a1;
- (void)performCancelAnimationWithCompletion:(id /* block */)a0;
- (void)performClosingAnimationsAnimated:(BOOL)a0 withSendAnimation:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)performInitialAnimations;
- (void)performSendAndCloseAnimationWithCompletion:(id /* block */)a0;
- (void)removeTapRecogonizer;
- (void)replyButtonPressed:(id)a0;
- (void)setupReplyButton;

@end
