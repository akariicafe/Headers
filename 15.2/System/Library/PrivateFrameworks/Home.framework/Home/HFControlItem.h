@class NSSet, NSDictionary, NAIdentity, NSString, HFControlItemCharacteristicOptions;
@protocol HFAggregatedCharacteristicValueSource;

@interface HFControlItem : HFItem <NAIdentifiable, NSCopying>

@property (class, readonly, nonatomic) Class valueClass;
@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSDictionary *displayResults;
@property (readonly, nonatomic) id<HFAggregatedCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HFControlItemCharacteristicOptions *characteristicOptions;
@property (readonly, nonatomic) long long sortPriority;
@property (readonly, nonatomic) NSSet *characteristicTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_tintColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithValueSource:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)metadataForCharacteristicType:(id)a0;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)writeValue:(id)a0;
- (id)readValueAndPopulateStandardResults;
- (id)normalizedCharacteristicValuesForValues:(id)a0;
- (id)initWithValueSource:(id)a0 characteristicTypes:(id)a1 displayResults:(id)a2;
- (BOOL)canCopyWithCharacteristicOptions:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (BOOL)supportsItemRepresentingServices:(id)a0;
- (id)valueForCharacteristicType:(id)a0 inBatchReadResponse:(id)a1;
- (id)resultsForBatchReadResponse:(id)a0;
- (id)normalizedValueForValue:(id)a0;
- (id)servicePredicateForCharacteristicType:(id)a0 withUsage:(unsigned long long)a1;
- (id)characteristicValuesByTypeForBatchReadResponse:(id)a0;
- (id)_standardResultsForResultValue:(id)a0 characteristicValuesByType:(id)a1;
- (unsigned long long)_accessorySuspendedState;
- (id)normalizedValueForCharacteristicValue:(id)a0 ofType:(id)a1;
- (id)_descriptionWithCharacteristicOptions:(BOOL)a0 includeResults:(BOOL)a1;
- (long long)_primaryStateForValue:(id)a0;

@end
