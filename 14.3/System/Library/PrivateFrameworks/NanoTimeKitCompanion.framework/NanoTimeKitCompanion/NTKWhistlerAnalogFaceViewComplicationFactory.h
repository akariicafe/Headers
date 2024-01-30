@class NSString, NTKFaceView, NTKUtilityComplicationFactory;

@interface NTKWhistlerAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory> {
    NTKUtilityComplicationFactory *_complicationFactory;
}

@property (weak, nonatomic) NTKFaceView *faceView;
@property (nonatomic) double dialDiameter;
@property (nonatomic) BOOL usesNarrowTopSlots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (long long)complicationPickerStyleForSlot:(id)a0;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (id)pickerMaskForSlot:(id)a0;
- (id)customEditOptionContainerViewForSlot:(id)a0;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)a0;
- (id)keylineViewForComplicationSlot:(id)a0;
- (id)complicationPickerKeylineViewForComplicationSlot:(id)a0;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)loadLayoutRulesForFaceView:(id)a0 dialDiameter:(double)a1;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)a0 faceView:(id)a1;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (BOOL)_isCornerComplicationForSlot:(id)a0;
- (id)_cornerKeylineViewForSlot:(id)a0;
- (BOOL)_isCenterComplicationForSlot:(id)a0;
- (BOOL)_convertCornerSlot:(id)a0 toPosition:(long long *)a1;
- (struct CGPoint { double x0; double x1; })circularComplicationCenterForSlot:(id)a0 inFaceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_convertCircularSlot:(id)a0 toPosition:(long long *)a1;
- (id)initWithFaceView:(id)a0 dialDiameter:(double)a1 device:(id)a2;
- (BOOL)isCornerComplicationForSlot:(id)a0;
- (void)setAlpha:(double)a0 faceView:(id)a1;

@end
