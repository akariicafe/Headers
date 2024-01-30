@interface CKBigEmojiBalloonView : CKTextBalloonView

- (void)setGradientReferenceView:(id)a0;
- (id)accessibilityIdentifier;
- (BOOL)hasBackground;
- (void)setHasOverlay:(BOOL)a0 autoDismiss:(BOOL)a1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)addFilter:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setImage:(id)a0;
- (void)clearFilters;

@end
