@class BMBehaviorStorage;

@interface BMBehaviorRetriever : NSObject

@property (retain, nonatomic) BMBehaviorStorage *storage;
@property (nonatomic) unsigned long long fetchLimit;

- (id)init;
- (id)retrieveRulesWithSupport:(double)a0 confidence:(double)a1 filters:(id)a2;
- (void).cxx_destruct;
- (id)retrieveRulesWithFilters:(id)a0;
- (id)initWithURL:(id)a0 taskSpecificItemTypes:(id)a1;
- (id)initWithURL:(id)a0;
- (id)retrieveRulesWithSupport:(double)a0 confidence:(double)a1 filters:(id)a2 error:(id *)a3;
- (id)retrieveRulesWithAbsoluteSupport:(unsigned long long)a0 support:(double)a1 confidence:(double)a2 conviction:(double)a3 lift:(double)a4 rulePowerFactor:(double)a5 uniqueDaysLastWeek:(unsigned long long)a6 uniqueDaysTotal:(unsigned long long)a7 filters:(id)a8 error:(id *)a9;

@end
