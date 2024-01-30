@class UIView;

@interface SKUIInlineFlipContainerView : UIView {
    UIView *_backView;
    UIView *_frontView;
}

- (void).cxx_destruct;
- (void)flipToBackViewWithDuration:(double)a0 options:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (id)initWithFrontView:(id)a0 backView:(id)a1;

@end
