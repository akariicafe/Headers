@class NSString, NSMutableDictionary, UILabel, NSMutableArray;
@protocol FIUIBreathingPetalRingViewDrawable;

@interface FIUIDeepBreathingFlowerView : UIView <FIUIDeepBreathingPetalRingViewDelegate> {
    NSMutableDictionary *_petalRingsByNumberOfPetals;
    id<FIUIBreathingPetalRingViewDrawable> _currentPetalRing;
    long long _numberOfVisiblePetals;
    BOOL _showBlurTrails;
    long long _petalColor;
    UILabel *_congratulationsLabel;
    NSString *_congratulationsText;
    long long _state;
    double _stateStartTime;
    double _stateEndTime;
    double _sessionDuration;
    double _breathsPerMinute;
    double _petalCountOverride;
    NSMutableArray *_trailAlphaKeyFrames;
    NSMutableArray *_trailAlphaKeyValues;
    double _centerVerticalOffsetBeforeTransitionToConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(long long)a0;
- (void).cxx_destruct;
- (double)_petalCountForMinutesRemaining:(double)a0;
- (void)setNumberOfConfigurationPetals:(double)a0;
- (struct CGPoint { double x0; double x1; })_originalRingCenterForWindType:(long long)a0;
- (void)_createCongratulationsLabelIfNeeded;
- (id)_currentPetalRing;
- (double)_curveEaseInValue:(double)a0;
- (float)_interpolateWithKeyFrames:(id)a0 keyValues:(id)a1 value:(float)a2;
- (id)_petalRingWithNumberOfShaderPetals:(long long)a0 showBlurTrails:(BOOL)a1;
- (void)_ppt_setPetalCountOverride:(long long)a0;
- (void)_preloadPetalRings;
- (void)_setNumberOfVisiblePetals:(long long)a0 showBlurTrails:(BOOL)a1;
- (void)_setWindFraction:(double)a0 smallRadius:(double)a1 largeRadius:(double)a2 windType:(long long)a3 showBlurTrails:(BOOL)a4;
- (void)_updateForBreathWithPetalCount:(long long)a0 petalRadius:(double)a1 inhaleDuration:(double)a2 exhaleDuration:(double)a3 timeInCurrentBreath:(double)a4 showBlurTrails:(BOOL)a5 shouldSpin:(BOOL)a6;
- (void)_updateForCongratulationsWithTimeInState:(double)a0 fractionComplete:(double)a1;
- (void)_updateForGuidingWithTimeInState:(double)a0;
- (void)_updateForOnRampWithTimeInState:(double)a0;
- (void)_updateForShrinkToOnRampWithFractionComplete:(double)a0;
- (void)_updateForUnwindToCompletedWithFractionComplete:(double)a0;
- (void)_updateForWindToConfigurationWithFractionComplete:(double)a0;
- (void)_updatePetalsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 radius:(double)a1 radialDistance:(double)a2 angleOffset:(double)a3 clockwise:(BOOL)a4 alpha:(float)a5;
- (void)_updateShaderForNumberOfPetals:(long long)a0 showBlurTrails:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 congratulationsText:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 petalColor:(long long)a1 congratulationsText:(id)a2;
- (void)petalRingViewDisplayLinkDidFire:(id)a0;
- (void)setWelcomeWindFraction:(double)a0;
- (void)startGuidingAtDate:(id)a0 breathsPerMinute:(double)a1;
- (void)startOnRampAtDate:(id)a0 sessionDuration:(double)a1;
- (void)transitionToCompletedWithDuration:(double)a0;
- (void)transitionToConfigurationAnimated:(BOOL)a0;
- (void)transitionToCongratulations;

@end
