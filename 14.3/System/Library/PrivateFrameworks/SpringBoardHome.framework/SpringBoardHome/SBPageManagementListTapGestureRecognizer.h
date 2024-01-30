@class UITouch;

@interface SBPageManagementListTapGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UITouch *activeTouch;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
