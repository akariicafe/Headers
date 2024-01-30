@class NSString, _UIDigitizerGestureRecognizerImp;

@interface UIDigitizerTapGestureRecognizer : UIGestureRecognizer <_UIDigitizerGestureRecognizerImpDelegate> {
    _UIDigitizerGestureRecognizerImp *_imp;
}

@property (nonatomic) double maximumPressDuration;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } digitizerLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setAllowedTouchTypes:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)setAllowedPressTypes:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)pressesEndedSuccessfully:(id)a0;
- (void)pressesHeldForMinimum:(id)a0;
- (void)pressesHeldOverMaximum:(id)a0;
- (void)pressesNotHeldLongEnough:(id)a0;
- (void)touchesBeganSuccessfully:(id)a0;

@end
