@class UIView, NSString, NSArray, CKMessageHighlightButton, CAShapeLayer, CKGroupAcknowledgmentVotingViewController, CKLivePhotoBalloonView, UIVisualEffectView;

@interface CKFullScreenBalloonViewControllerPhone : CKFullScreenBalloonViewController <CKBalloonViewDelegate, CKStickerDetailViewControllerDelegate, PHLivePhotoViewDelegate, CKMessageHighlightButtonDelegate> {
    BOOL _shouldLayoutViews;
}

@property (retain, nonatomic) CKGroupAcknowledgmentVotingViewController *votingViewController;
@property (retain, nonatomic) UIView *balloonView;
@property (copy, nonatomic) NSArray *interfaceActions;
@property (retain, nonatomic) CKLivePhotoBalloonView *livePhotoBalloonView;
@property (retain, nonatomic) UIVisualEffectView *replyButtonEffectView;
@property (retain, nonatomic) CAShapeLayer *replyButtonBorderLayer;
@property (retain, nonatomic) CAShapeLayer *replyButtonMaskLayer;
@property (retain, nonatomic) CAShapeLayer *tintViewMaskLayer;
@property (retain, nonatomic) UIView *replyButtonView;
@property (nonatomic) double balloonYOffsetFromTranscript;
@property (nonatomic) BOOL animationsDisabledForTesting;
@property (retain, nonatomic) CKMessageHighlightButton *highlightButton;
@property (nonatomic) BOOL hideBalloonView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)__im_ff_isInterstellarEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })balloonViewFrameWithoutTransform;
- (void)loadLivePhotoBalloonViewIfNeeded;
- (BOOL)_shouldShowVotingView;
- (void)addHighlightButtonIfNeeded;
- (double)replyButtonHeightFromBalloon;
- (void)updateReplyButtonSizeAndLocation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutRelativeToHighlightButton:(BOOL)a1;
- (void)updateReplyButtonColor;
- (double)replyButtonVerticalOffset;
- (void)balloonViewSelected:(id)a0 keyModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)_stickerDetailViewControllerCloseButtonPressed:(id)a0;
- (void)disableAnimationsForTesting;
- (void)messageHightlightButtonDidFinishAnimating:(id)a0;
- (void)messageHightlightButtonWasClicked:(id)a0;
- (char)messageHightlightButtonTranscriptOrientation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })messageHightlightButtonBalloonViewFrame:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })messageHightlightButtonReplyButtonFrame:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)stickerDetailViewController:(id)a0 deletedStickerWithTransferGUID:(id)a1;
- (void)stickerDetailViewController:(id)a0 selectedStickerPackWithAdamID:(id)a1;
- (void)balloonViewLongTouched:(id)a0;
- (void)balloonViewShowInlineReply:(id)a0;
- (void)balloonViewTapped:(id)a0 withModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)balloonViewDoubleTapped:(id)a0;
- (void)liveBalloonTouched:(id)a0;
- (void)balloonViewSelected:(id)a0 withModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)balloonViewTextViewDidChangeSelection:(id)a0 selectedText:(id)a1 textView:(id)a2;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)a0;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)a0;
- (void)balloonView:(id)a0 userDidDragOutsideBalloonWithPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)balloonViewShouldCopyToPasteboard:(id)a0;
- (void)dealloc;
- (void)presentStickerDetailControllerWithStickers:(id)a0;
- (void)setupReplyButton;
- (void)dismissTapGestureRecognized:(id)a0;
- (void)performInitialAnimations;
- (void)performClosingAnimationsAnimated:(BOOL)a0 withSendAnimation:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)initWithChatItem:(id)a0 title:(id)a1 interfaceActions:(id)a2 gradientReferenceView:(id)a3 isGroupConversation:(BOOL)a4 pluginBalloonSnapshot:(id)a5 delegate:(id)a6;

@end
