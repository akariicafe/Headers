@class UIImage;

@interface VUIVideosImageView : UIImageView {
    BOOL _selected;
    UIImage *_flatImage;
}

@property (retain, nonatomic) UIImage *highlightOrSelectedImage;

+ (id)imageWithImage:(id)a0 existingImageView:(id)a1;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_updateImage;
- (void)setImage:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
