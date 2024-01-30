@class NSString;

@interface HRECharacteristicActionVarianceRule : HREActionVariance

@property (readonly, nonatomic) NSString *characteristicType;

+ (id)anyVarianceRuleForCharacteristicType:(id)a0;
+ (id)varianceKeyForCharacteristicType:(id)a0;

- (void).cxx_destruct;
- (id)_initWithType:(id)a0;
- (BOOL)passesForAction:(id)a0;

@end
