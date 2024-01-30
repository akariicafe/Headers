@class NSMutableString, NSMutableDictionary, NSDictionary, NSArray, NSString, NSMutableArray, NSMapTable;

@interface NURuleSystem : NSObject <NSSecureCoding> {
    NSMutableDictionary *_constants;
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
    NSMutableString *_runLog;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *constants;
@property (readonly, copy, nonatomic) NSMutableDictionary *state;
@property (readonly, copy, nonatomic) NSArray *rules;
@property (readonly, copy, nonatomic) NSArray *agenda;
@property (readonly, copy, nonatomic) NSArray *executed;
@property (readonly, copy, nonatomic) NSDictionary *facts;
@property (nonatomic) BOOL enableLogging;
@property (readonly, copy, nonatomic) NSString *runLog;

- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)a0;
- (void)retractFact:(id)a0;
- (void)addRule:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)evaluate;
- (void)reset;
- (id)debugDescription;
- (double)gradeForFact:(id)a0;
- (void)resetAndEvaluateWithInitialState:(id)a0;
- (void)setStateObject:(id)a0 forKey:(id)a1;
- (void)_addRuleToAgenda:(id)a0;
- (void)addRulesFromArray:(id)a0;
- (void)removeAllRules;
- (double)minimumGradeForFacts:(id)a0;
- (double)maximumGradeForFacts:(id)a0;
- (void)assertFact:(id)a0;
- (void)assertFact:(id)a0 grade:(double)a1;
- (void)retractFact:(id)a0 grade:(double)a1;

@end
