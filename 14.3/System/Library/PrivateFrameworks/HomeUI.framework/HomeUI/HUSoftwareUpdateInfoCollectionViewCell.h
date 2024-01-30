@class HUSoftwareUpdateInfoView, NSString, HFItem, UIView;
@protocol HUResizableCellDelegate;

@interface HUSoftwareUpdateInfoCollectionViewCell : UICollectionViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>

@property (readonly, nonatomic) UIView *topSeparatorView;
@property (readonly, nonatomic) UIView *bottomSeparatorView;
@property (readonly, nonatomic) HUSoftwareUpdateInfoView *infoView;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (nonatomic) BOOL topSeparatorVisible;
@property (nonatomic) BOOL bottomSeparatorVisible;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)a0;

@end
