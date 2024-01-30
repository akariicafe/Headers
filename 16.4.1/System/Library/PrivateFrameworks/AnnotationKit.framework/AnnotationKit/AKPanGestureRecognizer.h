@class NSString, NSMutableArray, NSMutableSet;

@interface AKPanGestureRecognizer : UIPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>

@property (nonatomic) struct CGPoint { double x; double y; } locationOfFirstTouch;
@property (nonatomic) BOOL penGestureDetected;
@property (retain, nonatomic) NSMutableArray *currentAccumulatedTouches;
@property (retain, nonatomic) NSMutableSet *additionalTouches;
@property (nonatomic) double currentWeight;
@property (nonatomic) double currentMaxWeight;
@property (readonly, nonatomic) unsigned long long additionalNumberOfTouches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (struct CGPoint { double x0; double x1; })locationOfFirstTouchInView:(id)a0;
- (void)_checkTouchForStylus:(id)a0;
- (id)accumulatedTouches;
- (void)resetAccumulatedTouches;
- (void)resetAdditionalTouches;

@end
