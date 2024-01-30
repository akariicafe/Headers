@interface SBHScrollableZoomingIconViewInteraction : SBHScrollableIconViewInteraction

@property (nonatomic) BOOL considersFolderIconTargets;

- (BOOL)isIconViewTheInteractingTargetIconView:(id)a0;
- (double)_clippingFudgeInset;
- (void)handleTargetIconViewClipped:(id)a0;

@end
