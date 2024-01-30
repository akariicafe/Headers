@class CSTeachableMomentsContainerView, NSMutableDictionary, NSTimer, CSHomeAffordanceViewController, NSString, UITapGestureRecognizer;
@protocol SBUIBiometricResource, SBDashBoardHomeAffordanceAnimationViewProviding;

@interface CSTeachableMomentsContainerViewController : CSCoverSheetViewControllerBase <CAAnimationDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSTimer *fireOffAnimationTimer;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL updateTextLabelOnNextAnimation;
@property (retain, nonatomic) NSMutableDictionary *cachedLegibilityLabels;
@property (nonatomic) BOOL controlCenterCoachingIsHidden;
@property (retain, nonatomic) UITapGestureRecognizer *homeAffordanceClickGestureRecognizer;
@property (readonly, nonatomic) CSTeachableMomentsContainerView *teachableMomentsContainerView;
@property (readonly, nonatomic) CSHomeAffordanceViewController *homeAffordanceViewController;
@property (nonatomic) unsigned long long animationState;
@property (weak, nonatomic) id<SBDashBoardHomeAffordanceAnimationViewProviding> viewProvider;
@property (retain, nonatomic) id<SBUIBiometricResource> biometricResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_animationKeyForKeyPath:(id)a0 iteration:(unsigned long long)a1 reset:(BOOL)a2;
+ (void)_addRepeatedAnimationWithProvider:(id /* block */)a0 toLayer:(id)a1;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (unsigned long long)currentState;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_contentSizeCategoryChanged;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)aggregateAppearance:(id)a0;
- (void)_setupTimer;
- (void)_updateTextLabel;
- (void)_updateText:(id)a0;
- (void)_updateLegibilitySettings;
- (void)_removeResetAnimationForKeyPath:(id)a0 onLayer:(id)a1;
- (void)_homeAffordanceClickRecognized:(id)a0;
- (void)_setControlCenterTutorsHidden:(BOOL)a0;
- (void)_moveUpTimerForFiringAfterDelay:(double)a0;
- (void)_cancelTimerAndResetAnimation;
- (void)_setupTimerWithDelay:(double)a0;
- (void)_updateTextLabelIfNeeded;
- (void)_addHomeAffordanceAnimation;
- (void)_addTextAnimation;
- (BOOL)_shouldTeachAboutControlCenter;
- (void)_addControlCenterGrabberAnimation;
- (void)_addControlCenterGlyphAnimation;
- (void)_addHomeAffordanceResetAnimation;
- (void)_addTextResetAnimation;
- (void)_addControlCenterGrabberResetAnimation;
- (void)_addControlCenterGlyphResetAnimation;
- (void)_removeNormalAnimationsForKeyPath:(id)a0 onLayer:(id)a1;
- (id)_homeAffordancePositionAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (void)_addResetAnimationForKeyPath:(id)a0 onLayer:(id)a1;
- (id)_textPositionAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (id)_textAlphaAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (id)_controlCenterGrabberPositionAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (id)_controlCenterGrabberAlphaAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (id)_controlCenterGlyphAlphaAnimationWithDuration:(double)a0 beginTime:(double)a1;

@end
