@class UIImageView;

@interface ASCredentialRequestImageSubPane : ASCredentialRequestSubPane

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) long long imageStyle;

+ (id)_imageViewWithImage:(id)a0 imageStyle:(long long)a1;
+ (id)_appIconViewWithImage:(id)a0;
+ (id)_customIconViewWithImage:(id)a0;
+ (id)_systemIconViewWithImage:(id)a0;

- (id)initWithImage:(id)a0;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (void)addToStackView:(id)a0 withCustomSpacingAfter:(double)a1 context:(id)a2;
- (id)initWithImage:(id)a0 imageStyle:(long long)a1;

@end
