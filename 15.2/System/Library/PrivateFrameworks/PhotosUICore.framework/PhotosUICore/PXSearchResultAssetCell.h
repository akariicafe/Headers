@class NSString, UIImageView;

@interface PXSearchResultAssetCell : UICollectionViewCell <PXSearchResultThumbnailCell>

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (readonly, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) UIImageView *syndicatedAssetBadge;
@property (retain, nonatomic) UIImageView *backgroundGradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setThumbnailImage:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)focusEffect;
- (void)shouldDisplayUnsavedSyndicatedAssetBadge:(BOOL)a0;
- (struct CGSize { double x0; double x1; })thumbnailImageViewPixelSize;

@end
