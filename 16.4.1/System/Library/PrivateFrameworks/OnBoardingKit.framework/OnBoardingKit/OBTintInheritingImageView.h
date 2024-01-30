@class UIImage;

@interface OBTintInheritingImageView : UIImageView

@property (retain, nonatomic) UIImage *originalImage;

- (void)setImage:(id)a0;
- (void)tintColorDidChange;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1 tintColor:(id)a2;
- (void).cxx_destruct;

@end
