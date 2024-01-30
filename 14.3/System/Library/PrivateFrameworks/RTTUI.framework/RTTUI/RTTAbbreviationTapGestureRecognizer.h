@class RTTUIAbbreviationView;

@interface RTTAbbreviationTapGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) RTTUIAbbreviationView *abbrevationView;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)ignoreTouch:(id)a0 forEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
