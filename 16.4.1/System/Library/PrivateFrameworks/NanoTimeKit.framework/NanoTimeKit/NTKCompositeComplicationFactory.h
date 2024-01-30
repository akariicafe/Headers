@class NSString, NSMutableDictionary, NSMutableOrderedSet;

@interface NTKCompositeComplicationFactory : NSObject <NTKFaceViewComplicationFactory>

@property (retain, nonatomic) NSMutableDictionary *factoriesBySlot;
@property (retain, nonatomic) NSMutableOrderedSet *factories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadLayoutRules;
- (long long)complicationPickerStyleForSlot:(id)a0;
- (id)keylineViewForComplicationSlot:(id)a0;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)curvedComplicationCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (void)deregisterFactoryAtSlot:(id)a0;
- (void)deregisterFactoryAtSlots:(id)a0;
- (id)factoryAtSlot:(id)a0;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)registerFactory:(id)a0 forSlot:(id)a1;
- (void)registerFactory:(id)a0 forSlots:(id)a1;
- (BOOL)slotSupportsCurvedText:(id)a0;

@end
