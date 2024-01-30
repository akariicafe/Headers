@class NSString, HFValueTransformer;

@interface HFPrimaryStateControlItem : HFControlItem <HFPrimaryStateWriter>

@property (readonly, copy, nonatomic) NSString *primaryStateCharacteristicType;
@property (readonly, nonatomic) HFValueTransformer *valueTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)toggleValue;
- (id)characteristicValuesForValue:(id)a0;
- (id)writePrimaryState:(long long)a0;
- (id)writeValue:(id)a0;
- (BOOL)canCopyWithCharacteristicOptions:(id)a0;
- (id)copyWithCharacteristicOptions:(id)a0 valueSource:(id)a1;
- (id)initWithValueSource:(id)a0 characteristicOptions:(id)a1 displayResults:(id)a2;
- (id)initWithValueSource:(id)a0 characteristicType:(id)a1 valueTransformer:(id)a2 displayResults:(id)a3;
- (id)valueForCharacteristicValues:(id)a0;

@end
