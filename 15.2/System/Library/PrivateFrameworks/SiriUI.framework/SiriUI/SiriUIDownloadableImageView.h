@class NSString, UIImageView, NSURL, NSBundle;

@interface SiriUIDownloadableImageView : UIView {
    UIImageView *_imageView;
    NSURL *_imageURL;
    BOOL _showingPlaceHolderImage;
    NSString *_placeHolderImageName;
    NSBundle *_placeHolderImageBundle;
    double _placeHolderVerticalOffset;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setImageURL:(id)a0;
- (void)showPlaceHolderImage;
- (void)_setImage:(id)a0 isPlaceHolder:(BOOL)a1;
- (id)initWithImageURL:(id)a0 placeHolderImageName:(id)a1 placeHolderImageBundle:(id)a2;
- (void)setPlaceHolderImageName:(id)a0;
- (void)setPlaceHolderVerticalOffset:(double)a0;

@end
