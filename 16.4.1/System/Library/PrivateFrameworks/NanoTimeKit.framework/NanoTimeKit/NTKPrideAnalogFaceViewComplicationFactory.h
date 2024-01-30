@class NSString, NTKFaceView;

@interface NTKPrideAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory>

@property (weak, nonatomic) NTKFaceView *faceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cleanupAfterEditingForFaceView:(id)a0;
- (void)loadLayoutRules;
- (id)_complicationSlots;
- (double)_edgeGapForState:(long long)a0;
- (double)_keylinePaddingForState:(long long)a0;
- (double)_lisaGapForState:(long long)a0;
- (void)applyComplicationContentSpecificAttributesAnimated:(BOOL)a0 faceView:(id)a1;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)a0 faceView:(id)a1 forSlots:(id)a2;
- (BOOL)fadesComplicationSlot:(id)a0 inEditMode:(long long)a1 faceView:(id)a2;
- (id)initWithFaceView:(id)a0 device:(id)a1;
- (long long)keylineStyleForComplicationSlot:(id)a0;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)prepareForEditingForFaceView:(id)a0;

@end
