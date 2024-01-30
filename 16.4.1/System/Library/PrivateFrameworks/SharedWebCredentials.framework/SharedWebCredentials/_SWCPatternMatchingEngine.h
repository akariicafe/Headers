@class _SWCSubstitutionVariableList, _SWCPatternList;

@interface _SWCPatternMatchingEngine : NSObject {
    _SWCPatternList *_patternList;
    _SWCSubstitutionVariableList *_subVarList;
}

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)_evaluateURLComponents:(id)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1;
- (id)evaluateURLComponents:(id)a0;
- (id)evaluateURLComponents:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (id)initWithPatternDictionaries:(id)a0;
- (id)initWithPatternDictionaries:(id)a0 substitutionVariables:(id)a1;

@end
