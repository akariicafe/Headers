@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingDistributionRuleManager : PLAccountingRuleManager {
    NSRegularExpression *_regex;
}

@property (retain, nonatomic) NSMutableDictionary *rootNodeIDToNodeIDToDistributionRule;
@property (retain, nonatomic) NSMutableDictionary *distributionIDToDistributionRules;

+ (id)sharedInstance;
+ (id)rulesEntryKey;
+ (id)rulesPath;

- (void)indexRule:(id)a0;
- (id)regex;
- (id)distributionRuleForRootNodeID:(id)a0 andNodeID:(id)a1;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;
- (void)setRegex:(id)a0;
- (id)distributionRulesForDistributionID:(id)a0;
- (void).cxx_destruct;

@end
