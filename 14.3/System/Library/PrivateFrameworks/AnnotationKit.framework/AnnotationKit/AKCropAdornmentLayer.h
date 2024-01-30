@class CAShapeLayer;

@interface AKCropAdornmentLayer : AKAdornmentLayer

@property (retain) CAShapeLayer *handlesLayer;

- (void).cxx_destruct;
- (void)updateAdornmentElements;
- (void)updateSublayersWithScale:(double)a0;
- (BOOL)needsUpdateWhenDraggingStartsOrEnds;
- (void)_addHandles;
- (void)_updateHandles;
- (BOOL)_shouldShowHandles;
- (void)_removeHandles;

@end
