@class UIImageView, UIImage, NSArray;

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane

@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *imageViewConstraints;

+ (id)_imageViewWithImage:(id)a0;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)addToStackView:(id)a0 context:(id)a1;
- (void)addToConstraints:(id)a0 context:(id)a1;

@end
