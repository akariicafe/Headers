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
- (id)copyWithValueSource:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (id)metadataForCharacteristicType:(id)a0;
- (id)normalizedValueForValue:(id)a0;
- (id)writeValue:(id)a0;
- (unsigned long long)_accessorySuspendedState;
- (id)_descriptionWithCharacteristicOptions:(BOOL)a0 includeResults:(BOOL)a1;
- (long long)_primaryStateForValue:(id)a0;
- (id)_standardResultsForResultValue:(id)a0 characteristicValuesByType:(id)a1;
- (BOOL)canCopyWithCharacteristicOptions:(id)a0;
- (id)characteristicValuesByTypeForBatchReadResponse:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 characteristicTypes:(id)a1 displayResults:(id)a2;
- (id)normalizedCharacteristicValuesForValues:(id)a0;
- (id)normalizedValueForCharacteristicValue:(id)a0 ofType:(id)a1;
- (id)readValueAndPopulateStandardResults;
- (id)resultsForBatchReadResponse:(id)a0;
- (id)servicePredicateForCharacteristicType:(id)a0 withUsage:(unsigned long long)a1;
- (BOOL)supportsItemRepresentingServices:(id)a0;
- (id)valueForCharacteristicType:(id)a0 inBatchReadResponse:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;

@end
