@protocol _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusEnginePanGestureTouchObserver;

@interface _UIFocusEnginePanGestureRecognizer : UIPanGestureRecognizer

@property (weak, nonatomic) id<_UIFocusEnginePanGestureRecognizerDelegate> delegate;
@property (weak, nonatomic) id<_UIFocusEnginePanGestureTouchObserver> touchObserver;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
