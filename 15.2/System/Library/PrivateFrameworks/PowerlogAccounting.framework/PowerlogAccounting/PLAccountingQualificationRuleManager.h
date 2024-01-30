@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingQualificationRuleManager : PLAccountingRuleManager {
    NSRegularExpression *_regex;
}

@property (retain, nonatomic) NSMutableDictionary *rootNodeIDToQualificationRules;
@property (retain, nonatomic) NSMutableDictionary *qualificationIDToQualificationRules;

+ (id)sharedInstance;
+ (id)rulesEntryKey;
+ (id)rulesPath;

- (id)qualificationRulesForQualificationID:(id)a0;
- (void)indexRule:(id)a0;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;
- (void).cxx_destruct;
- (id)regex;
- (id)qualificationRulesForRootNodeID:(id)a0;
- (void)setRegex:(id)a0;

@end
