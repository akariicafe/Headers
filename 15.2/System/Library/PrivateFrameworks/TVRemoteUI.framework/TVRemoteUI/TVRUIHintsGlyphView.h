@class UIImageView, UIView;
@protocol TVRUIHintsStyleProvider;

@interface TVRUIHintsGlyphView : UIView

@property (readonly, nonatomic) id<TVRUIHintsStyleProvider> styleProvider;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) long long *currentInterfaceOrientation;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 styleProvider:(id)a1;

@end
