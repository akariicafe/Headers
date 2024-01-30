@class HUShapeLayerView, UIVisualEffectView, UIView, HUGarageDoorStateTransition, HUVisualEffectContainerView;

@interface HUGarageDoorIconContentView : HUPrimaryStateIconContentView

@property (retain, nonatomic) HUShapeLayerView *buildingView;
@property (retain, nonatomic) HUVisualEffectContainerView *buildingContainerView;
@property (retain, nonatomic) HUShapeLayerView *carView;
@property (retain, nonatomic) UIVisualEffectView *carContainerView;
@property (retain, nonatomic) UIView *doorContainerView;
@property (retain, nonatomic) UIView *doorHingeView;
@property (retain, nonatomic) UIView *doorView;
@property (retain, nonatomic) UIVisualEffectView *topPanelHingeView;
@property (retain, nonatomic) HUShapeLayerView *topPanelView;
@property (retain, nonatomic) UIVisualEffectView *middlePanelHingeView;
@property (retain, nonatomic) HUShapeLayerView *middlePanelView;
@property (retain, nonatomic) UIVisualEffectView *bottomPanelHingeView;
@property (retain, nonatomic) HUShapeLayerView *bottomPanelViewWithoutHandle;
@property (retain, nonatomic) HUShapeLayerView *bottomPanelViewWithHandle;
@property (nonatomic, getter=isOpen) BOOL open;
@property (nonatomic) BOOL clipBottomPanelShapesToBounds;
@property (retain, nonatomic) HUGarageDoorStateTransition *activeTransition;

+ (id)buildingPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)carPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)pathForPanelAtPosition:(unsigned long long)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showHandle:(BOOL)a2;
+ (double)_scaleFactorForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
+ (double)_referenceHeightForPanelAtPosition:(unsigned long long)a0 open:(BOOL)a1;
+ (double)_referenceOriginYForPanelAtPosition:(unsigned long long)a0 open:(BOOL)a1;
+ (id)_pathForMiddleDoorPanelWithHandleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)_pathForBottomDoorPanelWithHandleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIconFromState:(long long)a0 toState:(long long)a1 animated:(BOOL)a2;
- (void)updateColorsForDisplayStyle:(unsigned long long)a0;
- (BOOL)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (id)panelHingeViews;
- (id)_createPanelViewForPosition:(unsigned long long)a0 showHandle:(BOOL)a1;
- (id)_panelViewsForPosition:(unsigned long long)a0;
- (void)_enumeratePanelViewsWithBlock:(id /* block */)a0;
- (void)_updateLayoutForOpenState:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateCarLayoutForOpenState:(BOOL)a0;
- (void)_updatePanelLayoutForOpenState:(BOOL)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_doorHingeSublayerTransformForOpenState:(BOOL)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_referenceScaleTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForPanelHingeAtPosition:(unsigned long long)a0 open:(BOOL)a1;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_panelHingeSublayerTransformWithOpenState:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForPanelAtPosition:(unsigned long long)a0 open:(BOOL)a1 relativeToHinge:(BOOL)a2;
- (double)_referenceScaleFactor;

@end
