@class UIColor, PXFocusInfo;

@interface PXRoundedCornerOverlayView : UIImageView {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL image; } _needsUpdateFlags;
}

@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) unsigned long long cornersToRound;
@property (readonly, nonatomic) BOOL continuousCorners;
@property (readonly, nonatomic) UIColor *overlayColor;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) PXFocusInfo *focusInfo;

- (void)_invalidateImage;
- (id)mutableChangeObject;
- (void)_updateImageIfNeeded;
- (void)performChanges:(id /* block */)a0;
- (void)setDisplayScale:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)setCornersToRound:(unsigned long long)a0;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setContinuousCorners:(BOOL)a0;
- (void)setCornerRadius:(double)a0;
- (void)setOverlayColor:(id)a0;

@end
