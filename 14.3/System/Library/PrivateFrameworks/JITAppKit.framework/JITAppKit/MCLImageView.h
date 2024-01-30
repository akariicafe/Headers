@class UIImage;

@interface MCLImageView : UIImageView {
    UIImage *_image;
}

+ (id)bitmapImage:(id)a0;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setImage:(id)a0;
- (void)setImageDelayed:(id)a0;
- (void)backgroundDecompressImage;

@end
