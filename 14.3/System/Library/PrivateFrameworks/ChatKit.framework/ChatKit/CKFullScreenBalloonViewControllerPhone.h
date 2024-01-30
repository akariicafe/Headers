@class UIView, NSString, NSArray, CKActionSheetMenuView, CAShapeLayer, CKGroupAcknowledgmentVotingViewController, CKLivePhotoBalloonView, UIVisualEffectView;

@interface CKFullScreenBalloonViewControllerPhone : CKFullScreenBalloonViewController <CKActionSheetMenuViewDelegate, CKBalloonViewDelegate, CKStickerDetailViewControllerDelegate, PHLivePhotoViewDelegate> {
    BOOL _shouldLayoutViews;
}

@property (retain, nonatomic) CKActionSheetMenuView *menuView;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChatItem:(id)a0 title:(id)a1 interfaceActions:(id)a2 gradientReferenceView:(id)a3 isGroupConversation:(BOOL)a4 showActionMenu:(BOOL)a5 pluginBalloonSnapshot:(id)a6 delegate:(id)a7;
- (void).cxx_destruct;
- (void)setupReplyButton;
- (void)dismissTapGestureRecognized:(id)a0;
- (void)performInitialAnimations;
- (void)performClosingAnimationsAnimated:(BOOL)a0 withSendAnimation:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)balloonViewLongTouched:(id)a0;
- (void)balloonViewShowInlineReply:(id)a0;
- (void)balloonViewTapped:(id)a0 withModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)balloonViewDoubleTapped:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)liveBalloonTouched:(id)a0;
- (void)balloonViewSelected:(id)a0 withModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)balloonViewTextViewDidChangeSelection:(id)a0 selectedText:(id)a1 textView:(id)a2;
- (void)balloonView:(id)a0 userDidDragOutsideBalloonWithPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)a0;
- (void)balloonViewShouldCopyToPasteboard:(id)a0;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)a0;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)presentStickerDetailControllerWithStickers:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_shouldShowVotingView;
- (void)loadLivePhotoBalloonViewIfNeeded;
- (double)replyButtonHeightFromBalloon;
- (void)updateReplyButtonSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateReplyButtonColor;
- (double)replyButtonVerticalOffset;
- (void)_stickerDetailViewControllerCloseButtonPressed:(id)a0;
- (void)disableAnimationsForTesting;
- (void)balloonViewSelected:(id)a0 keyModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)stickerDetailViewController:(id)a0 deletedStickerWithTransferGUID:(id)a1;
- (void)stickerDetailViewController:(id)a0 selectedStickerPackWithAdamID:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)balloonEditMenuViewWasDismissed:(id)a0;

@end
