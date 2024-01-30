@class UIColor, CABackdropLayer, NSHashTable;

@interface AVCABackdropLayerView : UIView

@property (weak, nonatomic) AVCABackdropLayerView *groupLeader;
@property (readonly, nonatomic) NSHashTable *dependents;
@property (nonatomic) long long activeBackdropEffect;
@property (readonly, nonatomic) CABackdropLayer *layer;
@property (nonatomic, getter=isCaptureOnly) BOOL captureOnly;
@property (nonatomic) BOOL forceLowQualityEffect;
@property (copy, nonatomic) UIColor *customBackgroundColor;

+ (id)colorMatrixFilter;
+ (Class)layerClass;
+ (id)averageFilter;
+ (id)blurFilter;
+ (id)reducedTransparencyColor;

- (void)_ensureDependents;
- (void)_updateFilters;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)addDependent:(id)a0;
- (void)updateActiveBackdropEffectIfGroupLeader;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateGroupLeader;
- (void)removeDependent:(id)a0;
- (void)_enumerateDependents:(id /* block */)a0;

@end
