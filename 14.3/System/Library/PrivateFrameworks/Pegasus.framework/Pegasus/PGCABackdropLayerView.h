@class UIColor, NSHashTable, PGCABackdropLayer;

@interface PGCABackdropLayerView : UIView

@property (readonly, nonatomic) PGCABackdropLayer *layer;
@property (weak, nonatomic) PGCABackdropLayerView *groupLeader;
@property (readonly, nonatomic) NSHashTable *dependents;
@property (copy, nonatomic) UIColor *customBackgroundColor;

+ (Class)layerClass;
+ (id)reducedTransparencyColor;
+ (id)materialFilters;

- (void)_ensureDependents;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_preferredBackgroundColor;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_enumerateDependents:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 captureOnly:(BOOL)a1;
- (void)updateEffects;
- (long long)_preferredEffect;
- (BOOL)_isCaptureOnly;
- (BOOL)_hasAnyDependentsThatWantsCapturedBlur;
- (void)_removeDependent:(id)a0;
- (void)_addDependent:(id)a0;
- (BOOL)_wantsCapturedBlur;
- (BOOL)_isTransparentOrHasTransparentAncestor;

@end
