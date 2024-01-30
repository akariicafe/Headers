@interface HighlightRecognizer : UIGestureRecognizer {
    unsigned long long _numberOfTouches;
}

@property (weak, nonatomic) id highlightTarget;
@property (nonatomic) SEL highlightAction;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (unsigned long long)numberOfTouches;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
