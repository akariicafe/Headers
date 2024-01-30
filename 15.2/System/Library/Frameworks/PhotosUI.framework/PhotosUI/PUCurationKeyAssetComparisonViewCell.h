@class UIImage, NSString, UIImageView;

@interface PUCurationKeyAssetComparisonViewCell : UICollectionViewCell {
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) NSString *representedAssetIdentifier;

+ (double)cellHeightWithCellWidth:(double)a0;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
