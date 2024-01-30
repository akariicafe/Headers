@class NLTagger;

@interface _EARNLTokenizer : _EARTokenizer {
    NLTagger *_nlTagger;
}

- (id)init;
- (id)tokenize:(id)a0;
- (void).cxx_destruct;
- (id)tokenize:(id)a0 limit:(unsigned long long)a1;

@end
