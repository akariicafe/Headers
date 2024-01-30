@class UITouch;

@interface SBHPageManagementListTapGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UITouch *activeTouch;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
