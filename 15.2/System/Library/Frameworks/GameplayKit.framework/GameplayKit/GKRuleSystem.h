@class NSArray, NSMutableDictionary, NSMapTable, NSMutableArray;

@interface GKRuleSystem : NSObject {
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_toBeExecuted;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
}

@property (readonly, retain, nonatomic) NSMutableDictionary *state;
@property (readonly, retain, nonatomic) NSArray *rules;
@property (readonly, retain, nonatomic) NSArray *agenda;
@property (readonly, retain, nonatomic) NSArray *executed;
@property (readonly, retain, nonatomic) NSArray *facts;

- (void)retractFact:(id)a0;
- (void)addRule:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)evaluate;
- (void)reset;
- (float)gradeForFact:(id)a0;
- (void)_addRuleToAgenda:(id)a0;
- (void)addRulesFromArray:(id)a0;
- (void)removeAllRules;
- (float)minimumGradeForFacts:(id)a0;
- (float)maximumGradeForFacts:(id)a0;
- (void)assertFact:(id)a0;
- (void)assertFact:(id)a0 grade:(float)a1;
- (void)retractFact:(id)a0 grade:(float)a1;

@end
