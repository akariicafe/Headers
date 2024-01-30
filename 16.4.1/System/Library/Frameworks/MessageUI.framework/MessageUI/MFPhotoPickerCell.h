@class NSString, UIImageView, UIImage, MFRoundProgressView;

@interface MFPhotoPickerCell : UICollectionViewCell <MFReusableIdentifiable>

@property (class, readonly, nonatomic) NSString *reusableIdentifier;

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *mediaTypeBadgeView;
@property (retain, nonatomic) UIImageView *selectedBadgeView;
@property (retain, nonatomic) MFRoundProgressView *progressView;
@property (copy, nonatomic) NSString *representedAssetIdentifier;
@property (retain, nonatomic) UIImage *thumbnailImage;
@property (nonatomic) long long mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProgress:(double)a0;
- (void)setSelected:(BOOL)a0;
- (void)resetProgress;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
