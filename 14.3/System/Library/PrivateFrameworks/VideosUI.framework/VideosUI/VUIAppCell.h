@class NSString, UIImageView, UIImage, UILabel;

@interface VUIAppCell : UICollectionViewCell {
    UIImage *_image;
    NSString *_title;
    BOOL _didLayout;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (void)setImage:(id)a0;

@end
