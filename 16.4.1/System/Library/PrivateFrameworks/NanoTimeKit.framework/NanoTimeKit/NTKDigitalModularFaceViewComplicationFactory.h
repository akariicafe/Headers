@class NTKLayoutRule;

@interface NTKDigitalModularFaceViewComplicationFactory : NTKFaceViewComplicationFactory {
    NTKLayoutRule *_timeLayoutRuleNormal;
    NTKLayoutRule *_timeLayoutRuleEditing;
}

- (void).cxx_destruct;
- (void)_loadLayoutRulesForState:(long long)a0 withTopGap:(double)a1 largeModuleHeight:(double)a2 faceView:(id)a3;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (id)digitalTimeLayoutRuleForEditMode:(long long)a0;
- (id)initForDevice:(id)a0;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;

@end
