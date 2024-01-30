@class NSString, UIImageView;

@interface PXSearchResultAssetCell : UICollectionViewCell <PXSearchResultThumbnailCell>

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (readonly, nonatomic) UIImageView *thumbnailImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setThumbnailImage:(id)a0;
- (struct CGSize { double x0; double x1; })thumbnailImageViewPixelSize;

@end
