@class NSSet, NSString;

@interface ACUISGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

@property (copy, nonatomic) NSSet *observedControlClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldRecognizeTouchForView:(id)a0;
- (BOOL)_shouldRecognizeTouches:(id)a0;

@end
