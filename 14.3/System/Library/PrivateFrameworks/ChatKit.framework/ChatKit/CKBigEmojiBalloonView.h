@interface CKBigEmojiBalloonView : CKTextBalloonView

- (BOOL)hasBackground;
- (void)clearFilters;
- (void)addFilter:(id)a0;
- (void)setHasOverlay:(BOOL)a0 autoDismiss:(BOOL)a1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)accessibilityIdentifier;
- (void)setImage:(id)a0;
- (void)setGradientReferenceView:(id)a0;

@end
