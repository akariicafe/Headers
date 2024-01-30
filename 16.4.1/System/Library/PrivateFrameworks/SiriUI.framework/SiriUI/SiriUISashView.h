@class SiriUISashItem, UIImageView, SiriUITextContainerView, UIView, UIVisualEffectView, UIButton;

@interface SiriUISashView : UIView {
    UIView *_contentView;
    UIImageView *_imageView;
    SiriUITextContainerView *_textContainerView;
    BOOL _requestsExtraPadding;
    UIVisualEffectView *_vibrantButtonBackgroundView;
    UIVisualEffectView *_vibrantTextBackgroundView;
}

@property (nonatomic, getter=isNavigating) BOOL navigating;
@property (readonly, nonatomic) UIButton *backNavigationButton;
@property (readonly, nonatomic) SiriUISashItem *sashItem;

+ (id)_font;
+ (struct { unsigned long long x0; double x1; double x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })_textContainerStyleForSashItem:(id)a0;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setupBackNavigationButton;
- (void)setSashItem:(id)a0 locale:(id)a1;

@end
