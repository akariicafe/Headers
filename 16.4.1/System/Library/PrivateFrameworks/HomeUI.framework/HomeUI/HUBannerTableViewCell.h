@class HUGridCellLayoutOptions, HUBannerView, NSString, HFItem;
@protocol HUResizableCellDelegate, HUBannerViewDelegate;

@interface HUBannerTableViewCell : UITableViewCell <HUGridCellProtocol>

@property (readonly, nonatomic) HUBannerView *bannerView;
@property (weak, nonatomic) id<HUBannerViewDelegate> delegate;
@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden;
@property (retain, nonatomic) HUGridCellLayoutOptions *layoutOptions;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) double pointerRegionMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

+ (Class)bannerViewClass;
+ (Class)layoutOptionsClass;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
