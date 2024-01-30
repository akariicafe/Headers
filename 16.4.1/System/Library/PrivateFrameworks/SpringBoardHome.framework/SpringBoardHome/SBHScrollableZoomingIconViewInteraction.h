@interface SBHScrollableZoomingIconViewInteraction : SBHScrollableIconViewInteraction

@property (nonatomic) BOOL considersFolderIconTargets;

- (double)_clippingFudgeInset;
- (void)handleTargetIconViewClipped:(id)a0;
- (BOOL)isIconViewTheInteractingTargetIconView:(id)a0;

@end
