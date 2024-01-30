@class HFWallpaperSlice;
@protocol HUBackgroundEffectViewGrouping;

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedWallpaperRect;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (weak, nonatomic) id<HUBackgroundEffectViewGrouping> backgroundEffectViewGrouper;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
