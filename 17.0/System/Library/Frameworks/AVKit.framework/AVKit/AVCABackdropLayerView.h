@class UIColor, CABackdropLayer, NSHashTable;

@interface AVCABackdropLayerView : UIView

@property (weak, nonatomic) AVCABackdropLayerView *groupLeader;
@property (readonly, nonatomic) NSHashTable *dependents;
@property (nonatomic) long long activeBackdropEffect;
@property (readonly, nonatomic) CABackdropLayer *layer;
@property (nonatomic, getter=isCaptureOnly) BOOL captureOnly;
@property (nonatomic) BOOL forceLowQualityEffect;
@property (copy, nonatomic) UIColor *customBackgroundColor;

+ (Class)layerClass;
+ (id)reducedTransparencyColor;
+ (id)colorMatrixFilter;
+ (id)blurFilter;
+ (id)averageFilter;

- (void)removeDependent:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)_updateFilters;
- (void)updateActiveBackdropEffectIfGroupLeader;
- (void)_ensureDependents;
- (void)updateGroupLeader;
- (void)_enumerateDependents:(id /* block */)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)addDependent:(id)a0;
- (void)didMoveToWindow;

@end
