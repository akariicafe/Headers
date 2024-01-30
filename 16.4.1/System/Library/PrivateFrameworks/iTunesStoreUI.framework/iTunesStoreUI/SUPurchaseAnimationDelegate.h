@class UIView;

@interface SUPurchaseAnimationDelegate : NSObject {
    UIView *_view;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithView:(id)a0;
- (void)dealloc;

@end
