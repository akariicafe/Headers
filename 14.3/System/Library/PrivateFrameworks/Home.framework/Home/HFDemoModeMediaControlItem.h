@class HMAccessory, HFNullValueSource, NSString;

@interface HFDemoModeMediaControlItem : HFControlItem <HFTogglableControlItem>

@property (readonly, nonatomic) HFNullValueSource *mediaValueSource;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)initWithDisplayResults:(id)a0;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)readValueAndPopulateStandardResults;
- (id)toggleValue;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (id)normalizedValueForValue:(id)a0;

@end
