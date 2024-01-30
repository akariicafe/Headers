@interface MPActivityGestureRecognizer : UIGestureRecognizer

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_reportOngoingActivity;
- (void)_touchesTerminated:(id)a0 withEvent:(id)a1;
- (void)_stopReportingOngoingActivity;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
