@class CKTranscriptUnavailabilityIndicatorCell, CKTranscriptNotifyAnywayButtonCell, CKSendAnimationContext, NSString, UIView, CKChatControllerDummyAnimator, CKTranscriptTypingIndicatorCell;
@protocol CKSendAnimationBalloonProvider, CKThrowAnimationManagerDelegate, CKSendAnimationManagerDelegate;

@interface CKThrowAnimationManager : NSObject <CKSendAnimationManager>

@property (retain, nonatomic) CKSendAnimationContext *currentContext;
@property (retain, nonatomic) UIView *sendAnimationWindow;
@property (retain, nonatomic) CKChatControllerDummyAnimator *animator;
@property (retain, nonatomic) CKTranscriptTypingIndicatorCell *fakeTypingIndicatorCell;
@property (retain, nonatomic) CKTranscriptUnavailabilityIndicatorCell *fakeUnavailabilityIndicatorCell;
@property (retain, nonatomic) CKTranscriptNotifyAnywayButtonCell *fakeNotifyAnywayButtonCell;
@property (weak, nonatomic) id<CKThrowAnimationManagerDelegate> throwManagerDelegate;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
@property (weak, nonatomic) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_collectionViewController;
- (id)_entryView;
- (void)_removeAllAnimations;
- (void).cxx_destruct;
- (void)animateMessages:(id)a0;
- (id)init;
- (void)animationWillBeginWithContext:(id)a0;
- (void)animationDidFinishWithContext:(id)a0;
- (void)_setupThrowFrames;
- (void)_setupFakeTypingAndUnavailabilityIndicatorsIfNecessary;
- (void)_snapshotLiveBubbleIfNecessary;
- (void)_sendMessageAndPinTranscript;
- (void)_removeFakeTypingIndicatorIfNecessary;
- (void)_setupThrowBalloonViews;
- (void)_shiftFakeTypingIndicator;
- (void)_hideAddedChatItems;
- (struct CGPoint { double x0; double x1; })bestVisibleOffsetForBubbleAtIndex:(long long)a0;
- (BOOL)_transcriptWillShiftDueToThrowAnimation;
- (id)lastVisibleCellOfType:(Class)a0 inCollectionView:(id)a1;
- (double)_changeInEntryViewHeight;

@end
