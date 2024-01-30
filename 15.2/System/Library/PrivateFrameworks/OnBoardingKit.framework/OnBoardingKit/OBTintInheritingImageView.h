@class UIImage;

@interface OBTintInheritingImageView : UIImageView

@property (retain, nonatomic) UIImage *originalImage;

- (id)initWithImage:(id)a0 highlightedImage:(id)a1 tintColor:(id)a2;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)setImage:(id)a0;

@end
