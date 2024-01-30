@class UIStackView, NSString, NSUUID, UIImageView, UIView, UILabel, PXUIOverlayBadgesView;

@interface PUAssetPickerAssetCollectionGridCell : UICollectionViewCell <PUAssetPickerAsyncImageCell, PUAssetPickerAsyncCountCell>

@property (class, readonly, nonatomic) NSString *identifier;

@property (readonly, nonatomic) UIView *highlightView;
@property (readonly, nonatomic) UIView *badgesBackgroundView;
@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) PXUIOverlayBadgesView *badgesView;
@property (retain, nonatomic) NSUUID *asyncRequestID;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) int imageRequestID;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageRequestSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UILabel *countLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
