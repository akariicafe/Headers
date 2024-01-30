@interface NTKPrideAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory

- (id)initForDevice:(id)a0;
- (double)_keylinePaddingForState:(long long)a0;
- (double)_edgeGapForState:(long long)a0;
- (double)_lisaGapForState:(long long)a0;
- (void)applyComplicationContentSpecificAttributesAnimated:(BOOL)a0 faceView:(id)a1;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (long long)keylineStyleForComplicationSlot:(id)a0;
- (id)_complicationSlots;
- (void)prepareForEditingForFaceView:(id)a0;
- (void)cleanupAfterEditingForFaceView:(id)a0;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)a0 faceView:(id)a1 forSlots:(id)a2;
- (BOOL)fadesComplicationSlot:(id)a0 inEditMode:(long long)a1 faceView:(id)a2;

@end
