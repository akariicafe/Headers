@class UIColor, NSString, NTKUtilityComplicationFactory, NTKWhistlerAnalogFaceViewComplicationFactory, NTKFaceView;
@protocol NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate;

@interface NTKColorCircularUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKUtilityComplicationFactoryDelegate, NTKFaceViewComplicationFactory> {
    NTKUtilityComplicationFactory *_complicationFactory;
    NTKWhistlerAnalogFaceViewComplicationFactory *_cornerComplicationFactory;
    UIColor *_previousForegroundColor;
    UIColor *_previousPlatterColor;
}

@property (weak, nonatomic) NTKFaceView *faceView;
@property (weak, nonatomic) id<NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> delegate;
@property (nonatomic) BOOL graphicCornerComplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cleanupAfterEditingForFaceView:(id)a0;
- (void)loadLayoutRules;
- (id)keylineViewForComplicationSlot:(id)a0;
- (id)_colorComplicationSlots;
- (id)_complicationSlots;
- (double)_edgeGapForState:(long long)a0;
- (double)_keylinePaddingForState:(long long)a0;
- (double)_lisaGapForState:(long long)a0;
- (id)_slotForUtilitySlot:(long long)a0;
- (id)_utilityComplicationSlots;
- (long long)_utilitySlotForSlot:(id)a0;
- (void)applyComplicationContentSpecificAttributesAnimated:(BOOL)a0 faceView:(id)a1;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)a0 faceView:(id)a1 forSlots:(id)a2;
- (void)curvedCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (id)curvedMaskForSlot:(id)a0;
- (id)initForDevice:(id)a0;
- (id)initWithFaceView:(id)a0 device:(id)a1 graphicCornerComplications:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineFrameForCornerComplicationSlot:(id)a0 selected:(BOOL)a1;
- (long long)keylineStyleForComplicationSlot:(id)a0;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;
- (void)prepareForEditingForFaceView:(id)a0;
- (BOOL)slotUsesCurvedText:(long long)a0;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)a0;

@end
