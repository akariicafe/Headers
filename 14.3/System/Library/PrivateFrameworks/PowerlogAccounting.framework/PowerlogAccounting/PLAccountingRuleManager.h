@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingRuleManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ruleIDToRule;
@property (retain, nonatomic) NSRegularExpression *regex;

+ (id)sharedInstance;
+ (id)rulesEntryKey;
+ (id)rulesPath;
+ (id)firstLineWithFile:(id)a0;
+ (id)decryptData:(id)a0 withKey:(id)a1;
+ (id)storedHashDefaults;

- (id)init;
- (void).cxx_destruct;
- (void)indexRule:(id)a0;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;
- (id)ruleForRuleID:(id)a0;
- (void)loadRules;
- (id)rulesFromFileWithForceLoad:(BOOL)a0;

@end
