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

- (void)_updateImageIfNeeded;
- (void)performChanges:(id /* block */)a0;
- (void)setOverlayColor:(id)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)setDisplayScale:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setNeedsUpdate;
- (void)_invalidateImage;
- (id)mutableChangeObject;
- (void)traitCollectionDidChange:(id)a0;
- (void)setContinuousCorners:(BOOL)a0;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (void)setCornersToRound:(unsigned long long)a0;

@end
