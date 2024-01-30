@class UIView, CKEffectPreviewCollectionViewController, CKChatControllerDummyAnimator, CKEffectSelectionViewController, UIVibrancyEffect, CKComposition, UIButton, CKFullScreenEffectManager, NSLayoutConstraint, CKBalloonView, UILabel, UIVisualEffectView;
@protocol CKEffectPickerViewControllerDelegate;

@interface CKEffectPickerMacViewController : UIViewController <CKEffectPreviewCollectionViewControllerDelegate, CKEffectSelectionViewControllerDelegate, CKEffectPickerViewControllerProtocol>

@property (retain, nonatomic) CKEffectPreviewCollectionViewController *effectCollectionViewController;
@property (retain, nonatomic) CKEffectSelectionViewController *selectionViewController;
@property (retain, nonatomic) CKChatControllerDummyAnimator *dummyAnimator;
@property (retain, nonatomic) UIView *balloonContainer;
@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIVisualEffectView *titleContainerView;
@property (retain, nonatomic) UIVibrancyEffect *titleVibrancyEffect;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) CKComposition *composition;
@property (nonatomic) struct CGPoint { double x; double y; } balloonViewOrigin;
@property (nonatomic) char color;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic) BOOL hasSelectedDefaultEffect;
@property (retain, nonatomic) CKFullScreenEffectManager *fsem;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL showingInStandAloneWindow;
@property (nonatomic) id<CKEffectPickerViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)keyCommands;
- (void)touchUpInsideSendButton:(id)a0;
- (void).cxx_destruct;
- (void)updateColor:(char)a0;
- (void)keyCommandReturn:(id)a0;
- (void)setCloseButtonYPosition:(double)a0;
- (id)initWithComposition:(id)a0 balloonViewOrigin:(struct CGPoint { double x0; double x1; })a1 color:(char)a2;
- (void)closeButtonPressed:(id)a0;
- (void)presentPicker;
- (BOOL)effectShouldDisplayOverBalloon:(id)a0;
- (void)startAnimationPreviewForIdentifier:(id)a0;
- (id)_defaultSendAnimationContextForAnimationPreview;
- (void)handleTouchUp:(struct CGPoint { double x0; double x1; })a0;
- (void)effectCollectionViewController:(id)a0 willDisplayEffect:(id)a1;
- (void)effectSelectionViewController:(id)a0 didSelectEffectWithIdentifier:(id)a1;
- (void)updateHintTransition:(double)a0;
- (void)handleTouchMoved:(struct CGPoint { double x0; double x1; })a0;

@end
