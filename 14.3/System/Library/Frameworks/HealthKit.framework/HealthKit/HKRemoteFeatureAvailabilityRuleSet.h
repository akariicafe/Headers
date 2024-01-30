@class NSMutableDictionary;

@interface HKRemoteFeatureAvailabilityRuleSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *conditions;

- (void).cxx_destruct;
- (void)_parseRulesFromRawValue:(id)a0 dataSource:(id)a1;
- (id)initWithRawValue:(id)a0 dataSource:(id)a1;
- (id)evaluateAll;

@end
