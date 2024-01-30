@class UIWindow, CKBalloonView, NSString, CABackdropLayer, UIScrollView, CKAudioController;
@protocol CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider;

@interface CKImpactEffectManager : NSObject <CKAudioControllerDelegate, CKSendAnimationManager>

@property (retain, nonatomic) UIWindow *expressiveSendAnimationWindow;
@property (retain, nonatomic) CKBalloonView *expressiveSendAnimationBalloon;
@property (retain, nonatomic) CKBalloonView *originalBalloonView;
@property (retain, nonatomic) UIScrollView *expressiveSendScrollView;
@property (retain, nonatomic) CABackdropLayer *expressiveSendAnimationBackdrop;
@property (retain, nonatomic) CKAudioController *audioController;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *animatingIdentifier;
@property (nonatomic) BOOL isDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
@property (weak, nonatomic) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;

+ (BOOL)identifierIsAnimatedImpactEffect:(id)a0;
+ (BOOL)identifierIsValidImpactEffect:(id)a0;
+ (id)maskingStringForID:(id)a0;
+ (BOOL)identifierShouldPlayInWindow:(id)a0;
+ (id)localizedEffectNameForEffectWithIdentifier:(id)a0;
+ (id)effectIdentifiers;

- (void)stopAllEffects;
- (void)matchScrollViewOffset:(id)a0;
- (BOOL)__im_ff_commSafetyUIEnabled;
- (void)_audioSessionOptionsWillChange:(id)a0;
- (void).cxx_destruct;
- (void)animateMessages:(id)a0;
- (void)animateMessages:(id)a0 withEffectIdentifier:(id)a1 beginAnimationFromTranscriptPresentedState:(BOOL)a2;
- (void)setupAudioPlayerWithURL:(id)a0;
- (void)_sizeAnimationWindow;
- (id)init;
- (void)_animateLastMessage:(id)a0 withEffectIdentifier:(id)a1 beginAnimationFromTranscriptPresentedState:(BOOL)a2;
- (void)stopPlayingSound;
- (id)_sendAnimationContextForIdentifier:(id)a0 message:(id)a1 isSender:(BOOL)a2 beginAnimationFromTranscriptPresentedState:(BOOL)a3;
- (void)_cleanupExpressiveSendComponents;
- (void)_visibleCells:(id *)a0 aboveItem:(id)a1;
- (id)cloneBalloonForAnimationWithChatItem:(id)a0;
- (void)animationWillBeginWithContext:(id)a0;
- (void)animationDidFinishWithContext:(id)a0;
- (void)dealloc;

@end
