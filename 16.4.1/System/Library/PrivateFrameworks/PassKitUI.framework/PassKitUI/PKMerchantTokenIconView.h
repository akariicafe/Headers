@class UILabel, UIImage, NSURLSessionDataTask;

@interface PKMerchantTokenIconView : UIImageView {
    UILabel *_monogramLabel;
    UIImage *_image;
    double _cornerRadius;
    NSURLSessionDataTask *_imageDownloadTask;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_cancelImageDownload;
- (void)_downloadImageFromURL:(id)a0;
- (void)_setUpMonogramLabel;
- (void)_setUpSelf;
- (void)_setUpViews;
- (void)_updateIconImage;
- (void)_updateMonogramLabelWithText:(id)a0;
- (void)updateWithImage:(id)a0 cornerRadius:(double)a1;
- (void)updateWithImageURL:(id)a0 monogramText:(id)a1 cornerRadius:(double)a2;

@end
