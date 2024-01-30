@class HFWallpaperSlice, NSString, HUGridCellLayoutOptions, HFItem, UILabel, UIView;
@protocol HUResizableCellDelegate;

@interface HUDashboardButtonCell : UICollectionViewCell <HUGridCellProtocol>

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UIView *blurView;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedWallpaperRect;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
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

+ (Class)layoutOptionsClass;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_updateBlurredWallpaperDisplay;
- (void)_updateBlurredWallpaperContentsRect;
- (void)_updateBlurredWallpaperContentsScale;

@end
