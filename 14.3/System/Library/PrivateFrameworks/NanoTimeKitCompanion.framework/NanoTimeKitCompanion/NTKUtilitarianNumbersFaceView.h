@interface NTKUtilitarianNumbersFaceView : NTKUtilitarianFaceView

+ (id)_swatchImageFaceName;

- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (id)_utilityComplicationSlots;
- (struct CGPoint { double x0; double x1; })_dateComplicationCenterOffset;
- (struct CGPoint { double x0; double x1; })_dateComplicationRightAlignment;
- (void)_configureComplicationFactory:(id)a0;
- (id)_keylineViewForDensityEditing;
- (Class)_utilitarianSceneClass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForDensityEditing;
- (unsigned long long)_keylineLabelAlignmentForDensityEditing;

@end
