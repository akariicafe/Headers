@class NTKUtilityComplicationFactory;

@interface NTKAnalogUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory {
    NTKUtilityComplicationFactory *_complicationFactory;
}

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (id)_utilityComplicationSlots;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (long long)_utilitarianUtilitySlotForSlot:(id)a0;

@end
