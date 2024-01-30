@class UIImageView, UIView;

@interface NCCheckmarkButton : UIControl {
    UIView *_backgroundView;
    UIImageView *_checkmarkImageView;
}

+ (id)button;

- (void)setSelected:(BOOL)a0;
- (id)_init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
