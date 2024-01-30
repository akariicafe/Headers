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

- (void)evaluate;
- (void)addRule:(id)a0;
- (id)init;
- (void)retractFact:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)addRulesFromArray:(id)a0;
- (float)gradeForFact:(id)a0;
- (void)_addRuleToAgenda:(id)a0;
- (void)assertFact:(id)a0;
- (void)assertFact:(id)a0 grade:(float)a1;
- (float)maximumGradeForFacts:(id)a0;
- (float)minimumGradeForFacts:(id)a0;
- (void)removeAllRules;
- (void)retractFact:(id)a0 grade:(float)a1;

@end
