@class NSString, NSUUID, SBViewMorphAnimator, SBPIPContainerViewController;
@protocol SBViewMorphAnimatorDataSource, SBPIPMorphAnimatorControllerDelegate;

@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver>

@property (nonatomic) int targetProcessIdentifier;
@property (retain, nonatomic) NSString *scenePersistenceIdentifier;
@property (nonatomic) long long completedTargetAnimations;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) SBViewMorphAnimator *viewMorphAnimator;
@property (readonly, nonatomic) id<SBViewMorphAnimatorDataSource> viewMorphAnimatorDataSource;
@property (weak, nonatomic) SBPIPContainerViewController *pictureInPictureContainerViewController;
@property (readonly, weak, nonatomic) id<SBPIPMorphAnimatorControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ setupCompletionBlock;
@property (copy, nonatomic) id /* block */ animatorWaitingForExternalAnimationActionBlock;
@property (readonly, nonatomic, getter=isTerminated) BOOL terminated;
@property (readonly, nonatomic) BOOL hasCompletedSourceAnimations;
@property (readonly, nonatomic) BOOL hasCompletedTargetAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interrupt;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)_terminate;
- (void)willStartSourceAnimations:(unsigned long long)a0;
- (void)willRemoveTargeMatchMoveAnimationAtFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didEndSourceAnimations:(unsigned long long)a0 finished:(BOOL)a1 continueBlock:(id /* block */)a2;
- (void)didEndTargetAnimations:(unsigned long long)a0 finished:(BOOL)a1 continueBlock:(id /* block */)a2;
- (void)animatorWasInterrupted:(id)a0;
- (id)initWithTargetProcessIdentifier:(int)a0 uuid:(id)a1 scenePersistenceIdentifier:(id)a2 direction:(long long)a3 gestureInitiated:(BOOL)a4 delegate:(id)a5;
- (void)_performAnimatorWaitingForExternalAnimationActionBlock;
- (BOOL)_isWaitingForExternalAnimationCompletion;

@end
