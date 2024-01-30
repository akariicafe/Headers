@class _EARTokenizer;

@interface _EARTextNormalization : NSObject {
    _EARTokenizer *_tokenizer;
    struct unique_ptr<quasar::Munger, std::__1::default_delete<quasar::Munger> > { struct __compressed_pair<quasar::Munger *, std::__1::default_delete<quasar::Munger> > { struct Munger *__value_; } __ptr_; } _munger;
}

- (id)init;
- (void).cxx_destruct;
- (id)munge:(id)a0;
- (id)tokenize:(id)a0;
- (id).cxx_construct;
- (id)initWithNcsRoot:(id)a0;
- (id)initWithNcsRoot:(id)a0 mungeRuleFile:(id)a1;
- (id)initWithNcsRoot:(id)a0 mungeRules:(id)a1;
- (id)initWithMungeRules:(id)a0;
- (id)normalize:(id)a0;

@end
