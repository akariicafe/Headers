@class HMService, HFChildServiceFilter;

@interface HFChildServiceControlItem : HFControlItem

@property (readonly, nonatomic) HMService *parentService;
@property (readonly, nonatomic) HFChildServiceFilter *childServiceFilter;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)characteristicValuesForValue:(id)a0;
- (id)normalizedValueForValue:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithBaseValueSource:(id)a0 parentService:(id)a1 childServiceFilter:(id)a2 displayResults:(id)a3;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (BOOL)supportsItemRepresentingServices:(id)a0;
- (id)valueForCharacteristicValues:(id)a0;

@end
