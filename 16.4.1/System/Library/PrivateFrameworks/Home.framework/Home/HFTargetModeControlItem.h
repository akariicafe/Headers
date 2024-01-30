@class NSString, HFMultiStateValueSet, HFPowerStateControlItem;

@interface HFTargetModeControlItem : HFMultiStateControlItem <HFToggleableControlItem>

@property (readonly, nonatomic) NSString *targetModeCharacteristicType;
@property (readonly, nonatomic) HFMultiStateValueSet *targetModeValueSet;
@property (readonly, nonatomic) HFPowerStateControlItem *primaryPowerStateControlItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)toggleValue;
- (id)characteristicValuesForValue:(id)a0;
- (id)updateWithOptions:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicType:(id)a1 possibleValueSet:(id)a2 displayResults:(id)a3;
- (id)initWithValueSource:(id)a0 targetModeCharacteristicType:(id)a1 targetModeValueSet:(id)a2 primaryPowerStateControlItem:(id)a3 displayResults:(id)a4;
- (id)valueForCharacteristicValues:(id)a0;

@end
