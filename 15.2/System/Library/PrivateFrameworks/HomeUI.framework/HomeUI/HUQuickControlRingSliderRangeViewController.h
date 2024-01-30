@class HUQuickControlRingSliderViewProfile, HFRangeControlItem, NSString, HUQuickControlRingSliderView;

@interface HUQuickControlRingSliderRangeViewController : HUQuickControlSingleControlViewController <HUQuickControlRingSliderInteractionCoordinatorDelegate>

@property (readonly, nonatomic) HFRangeControlItem *controlItem;
@property (readonly, nonatomic) HUQuickControlRingSliderViewProfile *viewProfile;
@property (retain, nonatomic) HUQuickControlRingSliderView *ringSliderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (void).cxx_destruct;
- (void)quickControlItemUpdater:(id)a0 didUpdateResultsForControlItems:(id)a1;
- (void)invalidateViewProfile;
- (id)controlToViewValueTransformer;
- (void)interactionCoordinator:(id)a0 viewValueDidChange:(id)a1;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)updateMainStatusStringWithValue:(id)a0;
- (void)updateSupplementaryValue;
- (void)_getTemperatureThresholdControlItemStateString:(out id *)a0 temperatureString:(out id *)a1 withRangeControlItemValue:(id)a2;
- (void)_getHeaterCoolerThresholdControlItemStateString:(out id *)a0 temperatureString:(out id *)a1 withRangeControlItemValue:(id)a2;
- (void)modelValueDidChange;

@end
