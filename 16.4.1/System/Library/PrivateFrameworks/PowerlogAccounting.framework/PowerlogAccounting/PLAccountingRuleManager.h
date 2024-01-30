@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingRuleManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ruleIDToRule;
@property (retain, nonatomic) NSRegularExpression *regex;

+ (id)sharedInstance;
+ (id)rulesEntryKey;
+ (id)rulesPath;
+ (id)decryptData:(id)a0 withKey:(id)a1;
+ (id)firstLineWithFile:(id)a0;
+ (id)storedHashDefaults;

- (void)indexRule:(id)a0;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)loadRules;
- (id)ruleForRuleID:(id)a0;
- (id)rulesFromFileWithForceLoad:(BOOL)a0;

@end
