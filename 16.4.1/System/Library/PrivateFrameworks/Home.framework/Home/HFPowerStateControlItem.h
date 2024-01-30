@class NSSet, NSString;

@interface HFPowerStateControlItem : HFPrimaryStateControlItem <HFPrimaryStateWriter>

@property (readonly) NSSet *allTargetValues;
@property (readonly, nonatomic) NSSet *auxiliaryTargetValueTuples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valueClass;
+ (id)na_identity;
+ (id)_powerStateTargetValues;

- (void).cxx_destruct;
- (id)toggleValue;
- (id)characteristicValuesForValue:(id)a0;
- (id)initWithValueSource:(id)a0 displayResults:(id)a1;
- (id)writePrimaryState:(long long)a0;
- (BOOL)canCopyWithCharacteristicOptions:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 auxiliaryTargetValueTuples:(id)a1 additionalCharacteristicOptions:(id)a2 displayResults:(id)a3;
- (id)initWithValueSource:(id)a0 auxiliaryTargetValueTuples:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 characteristicTypes:(id)a1 displayResults:(id)a2;
- (id)readValueAndPopulateStandardResults;
- (BOOL)supportsItemRepresentingServices:(id)a0;
- (id)valueForCharacteristicValues:(id)a0;

@end
