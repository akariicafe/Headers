@class HUDisplayLinkApplier, NSDate, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString, HUElasticApplier, HUQuickControlSliderGestureTransformer, HUQuickControlViewProfile;
@protocol HUQuickControlIncrementalConvertibleProfile;

@interface HUQuickControlElasticSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlSliderGestureTransformerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) HUQuickControlSliderGestureTransformer *gestureTransformer;
@property (retain, nonatomic) UILongPressGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) HUElasticApplier *primaryValueSmoothingApplier;
@property (retain, nonatomic) HUElasticApplier *secondaryValueSmoothingApplier;
@property (retain, nonatomic) HUDisplayLinkApplier *controlVerticalStretchingApplier;
@property (retain, nonatomic) HUElasticApplier *controlHorizontalCompressionApplier;
@property (nonatomic) double activeGestureValue;
@property (nonatomic) unsigned long long activeGestureValueType;
@property (nonatomic) struct { double minimum; double maximum; } modelValue;
@property (readonly, nonatomic) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (nonatomic, getter=isFirstTouchDown) BOOL firstTouchDown;
@property (retain, nonatomic) NSDate *interactableStartTime;
@property (nonatomic) BOOL hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setValue:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)value;
- (void).cxx_destruct;
- (void)setViewVisible:(BOOL)a0;
- (void)dealloc;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)initWithControlView:(id)a0 delegate:(id)a1;
- (void)recordInteractionStart;
- (void)_updateModelValue:(struct { double x0; double x1; })a0 roundValue:(BOOL)a1 notifyDelegate:(BOOL)a2;
- (void)_updateControlViewValueOfType:(unsigned long long)a0 withValue:(double)a1;
- (void)_handleControlPanGesture:(id)a0;
- (void)_handleControlTapGesture:(id)a0;
- (id)_allAppliers;
- (void)_beginReceivingTouchesWithGestureRecognizer:(id)a0 isTouchContinuation:(BOOL)a1;
- (id)_valueNormalizerWithOptions:(id)a0;
- (void)_setupAllValueAppliersIfNecessary;
- (void)_updatePropertiesForControlValueSmoothingApplier:(id)a0 ofType:(unsigned long long)a1;
- (unsigned long long)_findClosestValueFromTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (double)_sliderValueForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_rubberBandingValueNormalizer;
- (id)_setupValueApplierForValueType:(unsigned long long)a0;
- (void)_setupStretchingAppliers;
- (struct { double x0; double x1; })_rawViewValueRange;
- (double)_rubberBandedStretchProgress;
- (void)gestureTransformer:(id)a0 sliderValueDidChange:(double)a1;
- (void)gestureDidEndForGestureTransformer:(id)a0;

@end
