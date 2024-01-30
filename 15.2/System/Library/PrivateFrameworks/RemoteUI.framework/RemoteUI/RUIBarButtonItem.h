@class UIBarButtonItem, NSString, UIImageView, UIButton;

@interface RUIBarButtonItem : RUIElement {
    UIBarButtonItem *_barButtonItem;
    UIButton *_backButton;
    UIImageView *_imageView;
}

@property (copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, nonatomic) NSString *itemType;

- (void)setEnabled:(BOOL)a0;
- (id)_labelColor;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setImage:(id)a0;
- (void)updateBackButtonColors;

@end
