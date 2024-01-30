@class UIWindow, CKBalloonView, NSString, CABackdropLayer, UIScrollView;
@protocol CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider;

@interface CKImpactEffectManager : NSObject <CKSendAnimationManager>

@property (retain, nonatomic) UIWindow *expressiveSendAnimationWindow;
@property (retain, nonatomic) CKBalloonView *expressiveSendAnimationBalloon;
@property (retain, nonatomic) CKBalloonView *originalBalloonView;
@property (retain, nonatomic) UIScrollView *expressiveSendScrollView;
@property (retain, nonatomic) CABackdropLayer *expressiveSendAnimationBackdrop;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *animatingIdentifier;
@property (nonatomic) BOOL isDisabled;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
@property (weak, nonatomic) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)maskingStringForID:(id)a0;
+ (id)localizedEffectNameForEffectWithIdentifier:(id)a0;
+ (BOOL)identifierIsAnimatedImpactEffect:(id)a0;
+ (BOOL)identifierIsValidImpactEffect:(id)a0;
+ (BOOL)identifierShouldPlayInWindow:(id)a0;
+ (id)effectIdentifiers;

- (void)matchScrollViewOffset:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_animateLastMessage:(id)a0;
- (void)_sizeAnimationWindow;
- (id)_sendAnimationContextForIdentifier:(id)a0 message:(id)a1 isSender:(BOOL)a2;
- (void)_cleanupExpressiveSendComponents;
- (void)_visibleCells:(id *)a0 aboveItem:(id)a1;
- (id)cloneBalloonForAnimationWithChatItem:(id)a0;
- (void)animationWillBeginWithContext:(id)a0;
- (void)animationDidFinishWithContext:(id)a0;
- (void)animateMessages:(id)a0;
- (void)stopAllEffects;

@end
