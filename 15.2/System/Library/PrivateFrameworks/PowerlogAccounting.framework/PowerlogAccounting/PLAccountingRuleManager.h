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

- (void)indexRule:(id)a0;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)ruleForRuleID:(id)a0;
- (void)loadRules;
- (id)rulesFromFileWithForceLoad:(BOOL)a0;

@end
