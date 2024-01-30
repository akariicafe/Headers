@class NSUUID, NSString, UIView, PXUIOverlayBadgesView, UIImageView, UILayoutGuide, PUProgressIndicatorView, NSNumber;

@interface PUAssetPickerAssetCell : UICollectionViewCell <PUAssetPickerAsyncImageCell>

@property (class, readonly, nonatomic) NSString *identifier;

@property (readonly, nonatomic) UILayoutGuide *cellLayoutMarginsGuide;
@property (readonly, nonatomic) UIView *overlayView;
@property (readonly, nonatomic) UIView *highlightView;
@property (readonly, nonatomic) UIView *selectedView;
@property (readonly, nonatomic) UIView *badgesBackgroundView;
@property (retain, nonatomic) PUProgressIndicatorView *progressView;
@property (readonly, nonatomic) PXUIOverlayBadgesView *badgesView;
@property (nonatomic) BOOL isAssetSelected;
@property (retain, nonatomic) NSNumber *progress;
@property (retain, nonatomic) NSUUID *asyncRequestID;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) int imageRequestID;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageRequestSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
