@class NSSet, NSString, HFNumberValueConstraints, NSNumber;

@interface HFRangeControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSSet *targetCharacteristicTypes;
@property (readonly, copy, nonatomic) NSString *minimumCharacteristicType;
@property (readonly, copy, nonatomic) NSString *maximumCharacteristicType;
@property (readonly, nonatomic) HFNumberValueConstraints *minimumValueConstraints;
@property (readonly, nonatomic) HFNumberValueConstraints *maximumValueConstraints;
@property (readonly, nonatomic) HFNumberValueConstraints *targetValueConstraints;
@property (readonly, copy, nonatomic) NSNumber *maximumValue;
@property (readonly, copy, nonatomic) NSNumber *minimumValue;
@property (readonly, copy, nonatomic) NSNumber *stepValue;

+ (Class)valueClass;
+ (id)readOnlyCharacteristicTypes;
+ (BOOL)_hasWritableCharacteristicsOfType:(id)a0 valueSource:(id)a1;

- (void).cxx_destruct;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (id)resultsForBatchReadResponse:(id)a0;
- (id)initWithValueSource:(id)a0 targetCharacteristicTypes:(id)a1 minimumCharacteristicType:(id)a2 maximumCharacteristicType:(id)a3 displayResults:(id)a4;
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)a0;
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)a0;
- (id)numberValueFormatter;
- (id)_minimumCharacteristicTypeMetadata;
- (id)_maximumCharacteristicTypeMetadata;
- (id)_targetCharacteristicTypeMetadataWithCharacteristicValuesKeyedByType:(id)a0;
- (id)minimumCharacteristicTypeStepValue;
- (id)maximumCharacteristicTypeStepValue;

@end
