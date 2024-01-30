@class NSMutableSet;

@interface TapOffGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *_touches;
}

- (id)init;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
