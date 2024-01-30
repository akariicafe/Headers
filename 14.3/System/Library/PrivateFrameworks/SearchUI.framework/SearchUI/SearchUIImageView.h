@class SFImage, UIView, SearchUIButton;

@interface SearchUIImageView : TLKImageView

@property (retain, nonatomic) SFImage *currentImage;
@property (retain, nonatomic) SearchUIButton *overlayPlayButton;
@property (retain, nonatomic) UIView *tintView;

+ (id)imageViewWithImage:(id)a0;
+ (id)thumbnailForRowModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithImage:(id)a0;
- (void)updateWithImage:(id)a0 completionHandler:(id /* block */)a1;
- (void)layoutSubviews;
- (void)appIconDidChange:(id)a0;
- (void)updateWithImage:(id)a0 needsOverlayButton:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
