@class NSString, CKSendAnimationContext, CKSendAnimationWindow, CKChatControllerDummyAnimator, CKTranscriptTypingIndicatorCell;
@protocol CKSendAnimationBalloonProvider, CKThrowAnimationManagerDelegate, CKSendAnimationManagerDelegate;

@interface CKThrowAnimationManager : NSObject <CKSendAnimationManager>

@property (retain, nonatomic) CKSendAnimationContext *currentContext;
@property (retain, nonatomic) CKSendAnimationWindow *sendAnimationWindow;
@property (retain, nonatomic) CKChatControllerDummyAnimator *animator;
@property (retain, nonatomic) CKTranscriptTypingIndicatorCell *fakeTypingIndicatorCell;
@property (weak, nonatomic) id<CKThrowAnimationManagerDelegate> throwManagerDelegate;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
@property (weak, nonatomic) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_entryView;
- (id)init;
- (void).cxx_destruct;
- (void)animationWillBeginWithContext:(id)a0;
- (void)animationDidFinishWithContext:(id)a0;
- (void)animateMessages:(id)a0;
- (void)_setupFakeTypingIndicatorIfNecessary;
- (void)_setupThrowBalloonViews;
- (void)_snapshotLiveBubbleIfNecessary;
- (void)_sendMessageAndPinTranscript;
- (void)_removeFakeTypingIndicatorIfNecessary;
- (void)_setupThrowFrames;
- (void)_shiftFakeTypingIndicator;
- (void)_hideAddedChatItems;
- (struct CGPoint { double x0; double x1; })bestVisibleOffsetForBubbleAtIndex:(long long)a0;
- (void)_removeAllAnimations;
- (BOOL)_transcriptWillShiftDueToThrowAnimation;
- (double)_changeInEntryViewHeight;
- (id)_collectionViewController;

@end
