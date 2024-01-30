@class UIImage;

@interface MCLImageView : UIImageView {
    UIImage *_image;
}

+ (id)bitmapImage:(id)a0;

- (void)didMoveToWindow;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (void)backgroundDecompressImage;
- (void)setImageDelayed:(id)a0;

@end
