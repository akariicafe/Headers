@class NSString, NSSet, NSMutableDictionary;

@interface WBSPasswordPatternMatchSolver : NSObject {
    NSString *_password;
    NSSet *_patternMatches;
    NSMutableDictionary *_partialSolutions;
}

- (void).cxx_destruct;
- (id)_unwindSolution;
- (void)_enumeratePartialSolutionsWithEndIndex:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)_exhaustiveSearchPatternWithStartIndex:(unsigned long long)a0 endIndex:(unsigned long long)a1;
- (id)_partialSolutionWithEndIndex:(unsigned long long)a0 patternCount:(unsigned long long)a1;
- (void)_setPartialSolution:(id)a0 withEndIndex:(unsigned long long)a1 patternCount:(unsigned long long)a2;
- (void)_updateExhaustiveSearchPartialSolutionsAtEndIndex:(unsigned long long)a0;
- (void)_updatePartialSolutionsWithPatternMatch:(id)a0 patternCount:(unsigned long long)a1;
- (id)initWithPassword:(id)a0 patternMatches:(id)a1;
- (id)optimalEvaluation;

@end
