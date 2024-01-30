@class UIImageView;

@interface ASCredentialRequestImageSubPane : ASCredentialRequestSubPane

@property (readonly, nonatomic) UIImageView *imageView;

+ (id)_imageViewWithImage:(id)a0;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)addToStackView:(id)a0 withCustomSpacingAfter:(double)a1 context:(id)a2;

@end
