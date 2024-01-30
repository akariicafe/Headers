@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingQualificationRuleManager : PLAccountingRuleManager {
    NSRegularExpression *_regex;
}

@property (retain, nonatomic) NSMutableDictionary *rootNodeIDToQualificationRules;
@property (retain, nonatomic) NSMutableDictionary *qualificationIDToQualificationRules;

+ (id)sharedInstance;
+ (id)rulesEntryKey;
+ (id)rulesPath;

- (id)regex;
- (void).cxx_destruct;
- (void)indexRule:(id)a0;
- (void)setRegex:(id)a0;
- (id)qualificationRulesForQualificationID:(id)a0;
- (id)qualificationRulesForRootNodeID:(id)a0;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;

@end
