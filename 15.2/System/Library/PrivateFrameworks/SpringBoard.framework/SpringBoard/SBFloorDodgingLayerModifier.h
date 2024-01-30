@class SBDodgingModel;

@interface SBFloorDodgingLayerModifier : SBDodgingModifier

@property (retain, nonatomic) SBDodgingModel *overridingModel;

- (id)model;
- (void).cxx_destruct;
- (id)modelForInvalidatedModel:(id)a0;
- (id)framesForIdentifiers;
- (long long)animationBehaviorModeForIdentifier:(id)a0;
- (id)zOrderedIdentifiers;
- (id)layoutSettingsForIdentifier:(id)a0;
- (id)_modelByPerformingDodgingInModel:(id)a0;
- (id)_modelByClampingOverhangingIdentifiers:(id)a0;
- (id)_modelsByTranslatingOverlappingIdentifiers:(id)a0 allowedEdges:(unsigned long long)a1;
- (id)_modelsByResizingOverlappingIdentifiers:(id)a0;
- (id)_framesForIdentifiersInModel:(id)a0;
- (id)_identifierIfAnyIllegallyOutsideContentViewBounds:(id)a0 model:(id)a1;
- (id)_identifierIfAnyIllegallyClippingOtherIdentifiers:(id)a0 model:(id)a1 intersectionSize:(out struct CGSize { double x0; double x1; } *)a2 intersectingFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;

@end
