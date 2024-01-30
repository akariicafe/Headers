@class SFGradientView, TiltedTabView, TiltedTabItemLayoutInfo, TabSnapshotImageView;

@interface TiltedTabThumbnailView : TabThumbnailView {
    SFGradientView *_contentShadowView;
    TiltedTabItemLayoutInfo *_layoutInfo;
}

@property (readonly, nonatomic) TabSnapshotImageView *snapshotView;
@property (weak, nonatomic) TiltedTabView *tiltedTabView;

- (void)setTitleFont:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)headerHasFinishedAnimating;
- (BOOL)titleIsHorizontallyCentered;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })headerBackgroundViewFrame;

@end
