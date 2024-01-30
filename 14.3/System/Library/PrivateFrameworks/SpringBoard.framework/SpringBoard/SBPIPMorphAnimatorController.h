@class SBPIPContainerViewController, NSUUID, NSString, SBViewMorphAnimator, SBPIPMorphAnimatorDataSource;
@protocol SBPIPMorphAnimatorControllerDelegate;

@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver>

@property (nonatomic) long long startedSourceAnimations;
@property (nonatomic) long long completedTargetAnimations;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) SBViewMorphAnimator *viewMorphAnimator;
@property (readonly, nonatomic) SBPIPMorphAnimatorDataSource *viewMorphAnimatorDataSource;
@property (weak, nonatomic) SBPIPContainerViewController *pictureInPictureContainerViewController;
@property (weak, nonatomic) id<SBPIPMorphAnimatorControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ setupCompletionBlock;
@property (copy, nonatomic) id /* block */ animatorWaitingForExternalAnimationActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void)interrupt;
- (void).cxx_destruct;
- (void)_terminate;
- (void)willStartSourceAnimations:(unsigned long long)a0;
- (void)willRemoveTargeMatchMoveAnimationAtFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didEndSourceAnimations:(unsigned long long)a0 finished:(BOOL)a1 continueBlock:(id /* block */)a2;
- (void)didEndTargetAnimations:(unsigned long long)a0 finished:(BOOL)a1 continueBlock:(id /* block */)a2;
- (void)animatorWasInterrupted:(id)a0;
- (int)targetProcessIdentifier;
- (id)scenePersistenceIdentifier;
- (void)_performAnimatorWaitingForExternalAnimationActionBlock;
- (BOOL)_isWaitingForExternalAnimationCompletion;
- (id)initWithTargetProcessIdentifier:(int)a0 uuid:(id)a1 scenePersistenceIdentifier:(id)a2 direction:(long long)a3 gestureInitiated:(BOOL)a4;

@end
