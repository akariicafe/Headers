@interface CKBigEmojiBalloonView : CKTextBalloonView

- (void)addFilter:(id)a0;
- (id)accessibilityIdentifier;
- (void)clearFilters;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)hasBackground;
- (void)setImage:(id)a0;
- (void)setGradientReferenceView:(id)a0;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)setHasOverlay:(BOOL)a0 autoDismiss:(BOOL)a1;

@end
