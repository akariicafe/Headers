@class UIView;

@interface SUPurchaseAnimationDelegate : NSObject {
    UIView *_view;
}

- (id)initWithView:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;

@end
