@interface HFValveActiveStateControlItem : HFPowerStateControlItem

- (id)initWithValueSource:(id)a0 displayResults:(id)a1;
- (id)writeValue:(id)a0;
- (id)_faucetValveSubtypeToIconIdentifierMap;
- (id)_iconDescriptorForServiceSubtype:(id)a0 inUse:(BOOL)a1 active:(BOOL)a2 hasFaucetAsParentService:(BOOL)a3;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 auxiliaryTargetValueTuples:(id)a1 additionalCharacteristicOptions:(id)a2 displayResults:(id)a3;
- (id)resultsForBatchReadResponse:(id)a0;
- (id)servicePredicateForCharacteristicType:(id)a0 withUsage:(unsigned long long)a1;

@end
