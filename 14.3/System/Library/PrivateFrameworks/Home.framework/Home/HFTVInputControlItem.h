@class NSArray;

@interface HFTVInputControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSArray *inputs;

+ (Class)valueClass;
+ (id)inputCharacteristicTypes;
+ (id)readOnlyOptionalInputCharacteristicTypes;
+ (id /* block */)_inputSourceValueComparatorForTelevisionProfile:(id)a0;

- (void).cxx_destruct;
- (id)valueForCharacteristicType:(id)a0 inBatchReadResponse:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)writeValue:(id)a0;
- (id)readValueAndPopulateStandardResults;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)valueForCharacteristicValues:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (BOOL)supportsItemRepresentingServices:(id)a0;
- (id)initWithValueSource:(id)a0 displayResults:(id)a1;

@end
