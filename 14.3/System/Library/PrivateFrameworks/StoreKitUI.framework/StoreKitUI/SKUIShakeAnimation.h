@interface SKUIShakeAnimation : NSObject {
    BOOL _shouldErase;
    BOOL _shouldVibrate;
}

- (id)initWithOptions:(id)a0;
- (void)animatePINInputControl:(id)a0;
- (void)animateView:(id)a0;

@end
