@class HMCharacteristic;

@interface HFCharacteristicCondition : HFCondition

@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, nonatomic) unsigned long long operatorType;
@property (readonly, nonatomic) id value;

+ (id)_characteristicPredicateInCompoundPredicate:(id)a0;
+ (id)_valuePredicateInCompoundPredicate:(id)a0;

- (id)initWithPredicate:(id)a0;
- (void).cxx_destruct;
- (id)hf_naturalLanguageSummaryWithOptions:(id)a0;
- (id)initWithCharacteristic:(id)a0 operatorType:(unsigned long long)a1 value:(id)a2;
- (id)_nameFormattingContext:(long long)a0;

@end
