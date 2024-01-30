@class RKNLEventTokenizer, RKMontrealModel;

@interface RKEventIdentifier : NSObject {
    RKMontrealModel *_model;
    RKNLEventTokenizer *_tokenizer;
    const void *_ioMappings;
    int _outputPermutation[5];
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithLanguageID:(id)a0;
- (id)_identifyOwnedTokenSequences:(id)a0;
- (id)_identifyStrings:(id)a0 otherDateCount:(unsigned long long)a1 otherDates:(struct RKEventIdentifierRange { unsigned long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; } *)a2;
- (void)resetEventIdentifierModel;
- (id)identifyStrings:(id)a0;
- (id)identifyText:(id)a0;
- (id)identifyMessage:(id)a0;

@end
