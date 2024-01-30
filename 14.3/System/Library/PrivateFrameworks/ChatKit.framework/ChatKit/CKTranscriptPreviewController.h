@class NSString, CKTranscriptCollectionView, CKConversation;

@interface CKTranscriptPreviewController : CKViewController <CKTranscriptCollectionViewControllerDelegate>

@property (retain, nonatomic) CKTranscriptCollectionView *collectionView;
@property (retain, nonatomic) CKConversation *conversation;
@property (nonatomic) double transcriptWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (nonatomic) BOOL isInitialLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)transcriptCollectionViewController:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)transcriptCollectionViewController:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 tappedForChatItem:(id)a2;
- (void)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 longPressedForItemWithIndexPath:(id)a2;
- (void)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 doubleTappedItemAtIndexPath:(id)a2;
- (void)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 selectedItemAtIndexPath:(id)a2;
- (void)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 showInlineReplyForItemWithIndexPath:(id)a2;
- (void)transcriptCollectionViewController:(id)a0 didTapAttributionButtonForChatItem:(id)a1;
- (void)transcriptCollectionViewController:(id)a0 didTapPluginStatusButtonForChatItem:(id)a1;
- (void)transcriptCollectionViewController:(id)a0 balloonViewTitleTappedForItemWithIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)transcriptCollectionViewControllerWillInset:(id)a0 targetContentInset:(inout struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)transcriptCollectionViewControllerDidInset:(id)a0;
- (BOOL)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 shouldSelectChatItem:(id)a2;
- (BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)a0;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)a0;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)a0;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)a0;
- (void)transcriptCollectionViewController:(id)a0 collectionViewContentSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)transcriptCollectionViewControllerRestingStateDidChange:(id)a0;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)a0;
- (void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)a0;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)a0;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)a0;
- (id)traitCollectionForTranscriptCollectionViewController:(id)a0;
- (id)initWithConversation:(id)a0 transcriptWidth:(double)a1 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (double)transcriptCollectionViewController:(id)a0 targetAlphaForChatItem:(id)a1;
- (BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)a0;
- (BOOL)transcriptCollectionViewController:(id)a0 shouldSetupFullscreenEffectUI:(id)a1;
- (BOOL)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)a0;
- (BOOL)transcriptCollectionViewController:(id)a0 shouldCleanupFullscreenEffectUI:(id)a1;
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)a0;
- (void)transcriptCollectionViewController:(id)a0 willBeginImpactEffectAnimationWithSendAnimationContext:(id)a1;
- (void)transcriptCollectionViewController:(id)a0 didEndImpactEffectAnimationWithSendAnimationContext:(id)a1;
- (void)transcriptCollectionViewController:(id)a0 balloonViewDidRequestPresentationStyle:(unsigned long long)a1 forChatItem:(id)a2 allowAllStyles:(BOOL)a3;
- (BOOL)transcriptCollectionViewController:(id)a0 balloonViewDidRequestCommitPayload:(id)a1 forPlugin:(id)a2 allowAllCommits:(BOOL)a3 error:(id *)a4;
- (void)transcriptCollectionViewController:(id)a0 balloonViewDidRequestStartEditingPayload:(id)a1 forPlugin:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)transcriptCollectionViewController:(id)a0 balloonViewDidRequestCommitSticker:(id)a1 forPlugin:(id)a2 allowAllCommits:(BOOL)a3 error:(id *)a4;
- (void)loadView;
- (id)textInputContextIdentifier;

@end
