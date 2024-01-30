@class NSString, NSUUID, SBAppLayout, SBViewMorphAnimator, SBPIPContainerViewController;
@protocol SBViewMorphAnimatorDataSource, SBPIPMorphAnimatorControllerDelegate;

@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver>

@property (nonatomic) long long completedTargetAnimations;
@property (readonly, nonatomic) int targetProcessIdentifier;
@property (readonly, nonatomic) NSString *scenePersistenceIdentifier;
@property (readonly, nonatomic) SBViewMorphAnimator *viewMorphAnimator;
@property (readonly, nonatomic) id<SBViewMorphAnimatorDataSource> viewMorphAnimatorDataSource;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic, getter=isGestureInitiated) BOOL gestureInitiated;
@property (retain, nonatomic) SBAppLayout *appLayout;
@property (nonatomic) long long layoutRole;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } appLayoutBoundingBox;
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

- (void)cancel;
- (void)interrupt;
- (void).cxx_destruct;
- (void)_terminate;
- (BOOL)_isWaitingForExternalAnimationCompletion;
- (void)_performAnimatorWaitingForExternalAnimationActionBlock;
- (void)animatorWasInterrupted:(id)a0;
- (void)didEndSourceAnimations:(unsigned long long)a0 finished:(BOOL)a1 continueBlock:(id /* block */)a2;
- (void)didEndTargetAnimations:(unsigned long long)a0 finished:(BOOL)a1 continueBlock:(id /* block */)a2;
- (id)initWithTargetProcessIdentifier:(int)a0 scenePersistenceIdentifier:(id)a1 appLayout:(id)a2 layoutRole:(long long)a3 appLayoutBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 windowScene:(id)a5 direction:(long long)a6 gestureInitiated:(BOOL)a7 delegate:(id)a8 uuid:(id)a9;
- (id)initWithTargetProcessIdentifier:(int)a0 scenePersistenceIdentifier:(id)a1 windowScene:(id)a2 direction:(long long)a3 gestureInitiated:(BOOL)a4 delegate:(id)a5 uuid:(id)a6;
- (void)willRemoveTargeMatchMoveAnimationAtFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)willStartSourceAnimations:(unsigned long long)a0;

@end
