@class UIColor, NSHashTable, PGCABackdropLayer;

@interface PGCABackdropLayerView : UIView

@property (readonly, nonatomic) PGCABackdropLayer *layer;
@property (weak, nonatomic) PGCABackdropLayerView *groupLeader;
@property (readonly, nonatomic) NSHashTable *dependents;
@property (copy, nonatomic) UIColor *customBackgroundColor;

+ (Class)layerClass;
+ (id)reducedTransparencyColor;
+ (id)materialFilters;

- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_ensureDependents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_enumerateDependents:(id /* block */)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)_preferredBackgroundColor;
- (void)_addDependent:(id)a0;
- (BOOL)_hasAnyDependentsThatWantsCapturedBlur;
- (BOOL)_isCaptureOnly;
- (BOOL)_isTransparentOrHasTransparentAncestor;
- (long long)_preferredEffect;
- (void)_removeDependent:(id)a0;
- (BOOL)_wantsCapturedBlur;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 captureOnly:(BOOL)a1;
- (void)updateEffects;

@end
