@interface ADTapGestureRecognizer : UIGestureRecognizer

@property (nonatomic) long long finalTrackingID;
@property (copy, nonatomic) id /* block */ touchDownHandler;
@property (copy, nonatomic) id /* block */ touchMovedHandler;
@property (copy, nonatomic) id /* block */ touchUpHandler;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
