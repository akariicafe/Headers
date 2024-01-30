@class StockGraphImageSet, UIImage, UIView, TintedView;

@interface VolumeGraphView : UIView {
    BOOL _showingTintedRegion;
    TintedView *_tintedVolumeView;
    UIView *_tintedRegionClipView;
    UIImage *_volumeImage;
}

@property (retain, nonatomic) StockGraphImageSet *graphImageSet;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)a0 rightX:(double)a1;
- (void)setShowingSelectedRegion:(BOOL)a0;

@end
