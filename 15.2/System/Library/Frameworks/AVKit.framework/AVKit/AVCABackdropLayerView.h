@class UIColor, CABackdropLayer, NSHashTable;

@interface AVCABackdropLayerView : UIView

@property (weak, nonatomic) AVCABackdropLayerView *groupLeader;
@property (readonly, nonatomic) NSHashTable *dependents;
@property (nonatomic) long long activeBackdropEffect;
@property (readonly, nonatomic) CABackdropLayer *layer;
@property (nonatomic, getter=isCaptureOnly) BOOL captureOnly;
@property (nonatomic) BOOL forceLowQualityEffect;
@property (copy, nonatomic) UIColor *customBackgroundColor;

+ (id)reducedTransparencyColor;
+ (id)colorMatrixFilter;
+ (id)averageFilter;
+ (Class)layerClass;
+ (id)blurFilter;

- (void)removeDependent:(id)a0;
- (void)didMoveToSuperview;
- (void)_ensureDependents;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_enumerateDependents:(id /* block */)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)addDependent:(id)a0;
- (void)didMoveToWindow;
- (void)updateActiveBackdropEffectIfGroupLeader;
- (void)updateGroupLeader;
- (void)_updateFilters;

@end
