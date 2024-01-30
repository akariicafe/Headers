@interface PosterBoard.PosterCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ posterCornerRadius;
    void /* unknown type, empty encoding */ layoutMode;
    void /* unknown type, empty encoding */ scaleInAlongsideLayoutMode;
}

@property (nonatomic, readonly) BOOL layoutModeUsesFullscreenSizedMetrics;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_descendantsShouldHighlight;

@end
