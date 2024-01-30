@class NSSet, NSDictionary;

@interface _ATXDeprecatedScoreInterpreter : NSObject {
    NSDictionary *_varPrograms;
}

@property (readonly, nonatomic) unsigned long long instructionCount;
@property (readonly, nonatomic) NSSet *subscoreNames;

- (id)initWithParseRoot:(id)a0;
- (id)evaluateWithInputScores:(id)a0 intentType:(id)a1;
- (id)evaluateWithInputScoreDict:(id)a0 intentType:(id)a1;
- (void).cxx_destruct;
- (void)_compileRoot:(id)a0;
- (double)_evalVariable:(id)a0 withCtx:(id)a1;

@end
