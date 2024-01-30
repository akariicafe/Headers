@class UIImage, UINavigationButton;

@interface SKUIAddToWishlistAnimation : NSObject {
    id /* block */ _completionBlock;
    UIImage *_image;
    UINavigationButton *_targetButton;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)animateWithCompletionBlock:(id /* block */)a0;
- (id)initWithImage:(id)a0 buttonItem:(id)a1 navigationBar:(id)a2;

@end
