@class NSString, NTKFaceView;

@interface NTKFullscreenSubdialComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory>

@property (nonatomic) struct CGPoint { double x; double y; } circularComplicationDistanceFromCenter;
@property (weak, nonatomic) NTKFaceView *faceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadLayoutRules;
- (long long)complicationPickerStyleForSlot:(id)a0;
- (id)keylineViewForComplicationSlot:(id)a0;
- (struct CGPoint { double x0; double x1; })_circularComplicationCenterForSlot:(id)a0 inFaceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_convertCircularSlot:(id)a0 toPosition:(long long *)a1;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (id)initForDevice:(id)a0;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;
- (void)setAlpha:(double)a0 faceView:(id)a1;

@end
