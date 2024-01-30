@class UIImageView, NSLayoutXAxisAnchor, UIView;

@interface _UIBackButtonMaskView : UIView {
    UIView *_maskExtensionView;
}

@property (readonly, nonatomic) UIImageView *maskImageView;
@property (readonly, nonatomic) NSLayoutXAxisAnchor *maskExtensionLeadingAnchor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
