@interface CDMFoundation.CDMCcqrAerCbROverridesProxy : SiriNLUOverrideProxy {
    void /* unknown type, empty encoding */ defaultTemplatePattern;
    void /* unknown type, empty encoding */ templatePattern;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captureGroupExpression;
}

- (void).cxx_destruct;
- (BOOL)addWithCollection:(id)a0;
- (BOOL)clean;
- (id)getRewriteHypothesisWithOverrideUtterance:(id)a0;
- (id)initWithFilePaths:(id)a0 templatePattern:(id)a1;
- (id)initWithUseMemory:(BOOL)a0;
- (id)initWithUseMemory:(BOOL)a0 templatePattern:(id)a1;
- (id)matchWithInputs:(id)a0;

@end
