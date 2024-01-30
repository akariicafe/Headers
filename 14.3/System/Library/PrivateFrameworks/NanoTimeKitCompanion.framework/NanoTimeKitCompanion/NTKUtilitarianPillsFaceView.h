@interface NTKUtilitarianPillsFaceView : NTKUtilitarianFaceView

+ (id)_swatchImageFaceName;

- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_utilityComplicationSlots;
- (struct CGPoint { double x0; double x1; })_dateComplicationCenterOffset;
- (struct CGPoint { double x0; double x1; })_dateComplicationRightAlignment;
- (void)_loadScene;
- (id)_visibleComplicationSlots;
- (void)_configureComplicationFactory:(id)a0;
- (void)_updateComplicationOverlapHiding;
- (void)_removeComplicationOverlapHiding;
- (id)_keylineViewForDensityEditing;
- (Class)_utilitarianSceneClass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForDensityEditing;
- (unsigned long long)_keylineLabelAlignmentForDensityEditing;

@end
