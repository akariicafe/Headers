@class NSArray, NSString, UITapRecognizer;

@interface UITapGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {
    struct CGPoint { double x; double y; } _locationInView;
    UITapRecognizer *_imp;
    unsigned int _delaysRecognitionForGreaterTapCounts;
}

@property (nonatomic, setter=_setButtonType:) long long _buttonType;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } centroid;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } location;
@property (readonly, nonatomic) NSArray *touches;
@property (nonatomic) double maximumTapDuration;
@property (nonatomic) BOOL isSingleKeyPressGesture;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) long long buttonMaskRequired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_supportsTouchContinuation;

- (BOOL)_isGestureType:(long long)a0;
- (BOOL)_shouldReceivePress:(id)a0;
- (void)setAllowableMovement:(double)a0;
- (void)_resetGestureRecognizer;
- (void)tapRecognizerFailedToRecognizeTap:(id)a0;
- (double)allowableMovement;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)_appendSubclassDescription:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)tapIsPossibleForTapRecognizer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)tapRecognizerRecognizedTap:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)_touchSloppinessFactor;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)setMaximumSingleTapDuration:(double)a0;
- (long long)_buttonMaskRequired;
- (void)setAllowedPressTypes:(id)a0;
- (void)_setButtonMaskRequired:(long long)a0;
- (BOOL)_delaysRecognitionForGreaterTapCounts;
- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;
- (double)maximumSingleTapDuration;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_setAllowableTouchTimeSeparation:(double)a0;
- (void)_setAllowableSeparation:(double)a0;
- (void)dealloc;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (double)_allowableSeparation;
- (long long)_finalStateForRecognition;
- (BOOL)_shouldFailInResponseToPresses:(id)a0 withEvent:(id)a1;
- (double)_allowableTouchTimeSeparation;
- (unsigned long long)numberOfTouches;
- (struct CGPoint { double x0; double x1; })locationOfTouch:(unsigned long long)a0 inView:(id)a1;

@end
