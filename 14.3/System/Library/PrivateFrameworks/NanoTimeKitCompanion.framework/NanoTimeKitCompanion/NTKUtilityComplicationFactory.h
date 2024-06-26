@class NSString, CLKFont, CLKDevice, NTKFaceView;
@protocol NTKUtilityComplicationFactoryDelegate;

@interface NTKUtilityComplicationFactory : NSObject <NTKFaceViewComplicationFactory>

@property (readonly, nonatomic) CLKDevice *device;
@property (weak, nonatomic) id<NTKUtilityComplicationFactoryDelegate> delegate;
@property (nonatomic) BOOL accommodatesTwoTopComplications;
@property (nonatomic) double normalSidePadding;
@property (nonatomic) double normalVerticalPadding;
@property (nonatomic) struct CGSize { double width; double height; } normalCircularPadding;
@property (nonatomic) double deselectedKeylineSideInnerPadding;
@property (nonatomic) double deselectedKeylineVerticalInnerPadding;
@property (nonatomic) double deselectedKeylineCircularInnerPadding;
@property (nonatomic) double selectedKeylineSideInnerPadding;
@property (nonatomic) double selectedKeylineVerticalInnerContentSpacer;
@property (nonatomic) double selectedKeylineHeight;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double foregroundImageAlpha;
@property (nonatomic) double maxNormalLongWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } screenEdgeInsets;
@property (nonatomic) double crownIndicatorGap;
@property (retain, nonatomic) CLKFont *topBezelLabelFont;
@property (nonatomic) double bezelLabelMaxWidthInDegree;
@property (nonatomic) double bezelLabelTopPadding;
@property (nonatomic) double bezelKeylineInnerCircleOffset;
@property (nonatomic) double dialDiameter;
@property (weak, nonatomic) NTKFaceView *faceView;
@property (nonatomic) double dateKeylineMaxWidth;
@property (nonatomic) double dateHorizontalCenterOffset;
@property (nonatomic) double dateVerticalCenterOffset;
@property (nonatomic) BOOL includesDateComplicationLayoutRules;
@property (nonatomic) long long bottomCenterLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)placementForSlot:(long long)a0;
+ (void)curvedCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(long long)a5 forDevice:(id)a6;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (long long)complicationPickerStyleForSlot:(id)a0;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)curvedComplicationCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (id)pickerMaskForSlot:(id)a0;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)a0;
- (id)keylineViewForComplicationSlot:(id)a0;
- (id)complicationPickerKeylineViewForComplicationSlot:(id)a0;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)slotSupportsCurvedText:(id)a0;
- (id)newViewForComplication:(id)a0 family:(long long)a1 forSlot:(long long)a2;
- (void)configureComplicationLayout:(id)a0 forSlot:(long long)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (unsigned long long)keylineLabelAlignmentForSlot:(long long)a0;
- (void)configureComplicationLayout:(id)a0 forSlot:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 dialDiameter:(double)a3;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 dialDiameter:(double)a2;
- (long long)layoutOverrideForComplicationType:(unsigned long long)a0 inSlot:(long long)a1;
- (id)keylineViewForSlot:(long long)a0 dialDiameter:(double)a1;
- (double)bezelComplicationRadiusWithDialDiameter:(double)a0;
- (double)bezelComplicationMaxAngularWidth;
- (id)curvedMaskForSlot:(long long)a0;
- (long long)_utilitySlotForSlot:(id)a0;
- (double)foregroundAlphaForEditing:(BOOL)a0;
- (double)foregroundImageAlphaForEditing:(BOOL)a0;
- (id)keylineViewForSlot:(long long)a0;
- (double)keylineCornerRadiusForSlot:(long long)a0;
- (id)_viewForDateComplication:(id)a0;
- (void)_configureTopLeftLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 variant:(BOOL)a2;
- (void)_configureTopRightLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 variant:(BOOL)a2;
- (void)_configureBottomLeftLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 variant:(BOOL)a2;
- (void)_configureBottomRightLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 variant:(BOOL)a2;
- (void)_configureTopBezelLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dialDiameter:(double)a2;
- (void)_configureBottomCenterLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 variant:(BOOL)a2;
- (void)_configureTopRightAboveLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configureBottomRightAboveLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configureTopRightBelowLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configureBottomRightBelowLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configureBottomRightLongLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configureDateLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_configureUpNextTopRightLayout:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_curvedImageForSlot:(long long)a0 filled:(BOOL)a1;
- (id)_curvedKeylineImageForSlot:(long long)a0;
- (id)_curvedMaskImageForSlot:(long long)a0;
- (double)_maxTopCornerWidthLeavingRoomForKeylines:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureLayout:(id)a0 withNormalSize:(struct CGSize { double x0; double x1; })a1 editingSize:(struct CGSize { double x0; double x1; })a2 variant:(BOOL)a3 addCircleOverrides:(BOOL)a4 makeRuleBlock:(id /* block */)a5;
- (double)_maxBottomCornerWidthLeavingRoomForKeylines:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_maxBottomCenterWidthLeavingRoomForKeylines:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_maxDateWidthLeavingRoomForKeylines;
- (double)_maxWidthForKeylineAndPadding;
- (double)foregroundAlphaForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (double)foregroundImageAlphaForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (double)maxDateWidthLeavingRoomForKeylines;

@end
