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

- (void)_removeAllAnimations;
- (id)init;
- (id)_collectionViewController;
- (void).cxx_destruct;
- (double)_changeInEntryViewHeight;
- (id)_entryView;
- (void)_hideAddedChatItems;
- (long long)_indexOfLastChatItemThatWillNotStickToTheBottom:(id)a0;
- (void)_removeFakeTypingIndicatorIfNecessary;
- (void)_sendMessageAndPinTranscript;
- (void)_setupFakeTypingAndUnavailabilityIndicatorsIfNecessary;
- (void)_setupThrowBalloonViews;
- (void)_setupThrowFrames;
- (void)_shiftFakeTypingIndicator;
- (void)_snapshotLiveBubbleIfNecessary;
- (BOOL)_transcriptWillShiftDueToThrowAnimation;
- (void)animateMessages:(id)a0;
- (void)animationDidFinishWithContext:(id)a0;
- (void)animationWillBeginWithContext:(id)a0;
- (id)lastVisibleCellOfType:(Class)a0 inCollectionView:(id)a1;
- (void)playSoundForPopAnimation;
- (void)popAnimationDidBegin;
- (double)scrollViewOffsetForBottomAligningChatItemAtIndex:(long long)a0;

@end
