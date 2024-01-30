@class NSString, NTKFaceView;

@interface NTKWhistlerAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory>

@property (weak, nonatomic) NTKFaceView *faceView;
@property (nonatomic) double dialDiameter;
@property (nonatomic) BOOL usesNarrowTopSlots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadLayoutRules;
- (long long)complicationPickerStyleForSlot:(id)a0;
- (id)keylineViewForComplicationSlot:(id)a0;
- (BOOL)_convertCircularSlot:(id)a0 toPosition:(long long *)a1;
- (BOOL)_convertCornerSlot:(id)a0 toPosition:(long long *)a1;
- (id)_cornerKeylineViewForSlot:(id)a0;
- (double)_edgeGapForState:(long long)a0;
- (BOOL)_isCenterComplicationForSlot:(id)a0;
- (BOOL)_isCornerComplicationForSlot:(id)a0;
- (double)_keylinePaddingForState:(long long)a0;
- (double)_lisaGapForState:(long long)a0;
- (struct CGPoint { double x0; double x1; })circularComplicationCenterForSlot:(id)a0 inFaceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (id)initForDevice:(id)a0;
- (id)initWithFaceView:(id)a0 dialDiameter:(double)a1 device:(id)a2;
- (BOOL)isCornerComplicationForSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineFrameForCornerComplicationSlot:(id)a0 selected:(BOOL)a1;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (void)loadLayoutRulesForFaceView:(id)a0 dialDiameter:(double)a1;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;
- (void)setAlpha:(double)a0 faceView:(id)a1;

@end
