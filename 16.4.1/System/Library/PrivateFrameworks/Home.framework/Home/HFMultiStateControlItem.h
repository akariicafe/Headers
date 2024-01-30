@class NSString, HFMultiStateValueSet;

@interface HFMultiStateControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSString *multiStateCharacteristicType;
@property (readonly, copy, nonatomic) HFMultiStateValueSet *possibleValueSet;

+ (Class)valueClass;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 characteristicType:(id)a1 possibleValueSet:(id)a2 displayResults:(id)a3;
- (id)initWithValueSource:(id)a0 multiStateCharacteristicType:(id)a1 allCharacteristicOptions:(id)a2 possibleValueSet:(id)a3 displayResults:(id)a4;
- (id)valueForCharacteristicValues:(id)a0;

@end
