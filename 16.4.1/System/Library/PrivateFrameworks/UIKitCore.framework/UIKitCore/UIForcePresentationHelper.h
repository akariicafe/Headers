@interface UIForcePresentationHelper : NSObject

+ (void)applyPhase:(unsigned long long)a0 toSnapshotView:(id)a1;
+ (id)snapshotViewForSourceView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceRectForView:(id)a0 proposedSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)visualEffectForPresentationPhase:(unsigned long long)a0 traitCollection:(id)a1 variant:(long long)a2;

@end
