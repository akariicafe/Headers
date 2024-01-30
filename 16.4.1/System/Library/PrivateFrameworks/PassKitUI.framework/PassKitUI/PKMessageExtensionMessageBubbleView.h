@class PKSharingMessageExtensionViewProperties, UIImageView, UIActivityIndicatorView, UIView, UILabel;

@interface PKMessageExtensionMessageBubbleView : UIView {
    UIView *_cardView;
    UIImageView *_cardArtImageView;
    UILabel *_leftTitleLabel;
    UILabel *_rightTitleLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_buttonLabel;
    UIImageView *_buttonIconView;
    UIView *_buttonBackgroundView;
    UIActivityIndicatorView *_spinner;
    BOOL _isValidatingMessage;
    BOOL _isUsingFallbackImage;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) PKSharingMessageExtensionViewProperties *properties;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_setupBubbleView;
- (void)beginValidateMessage;
- (void)completeValidateMessage;

@end
