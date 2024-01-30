@class RKNLEventTokenizer, RKMontrealModel;

@interface RKEventIdentifier : NSObject {
    RKMontrealModel *_model;
    RKNLEventTokenizer *_tokenizer;
    const void *_ioMappings;
    int _outputPermutation[5];
}

- (id)init;
- (void).cxx_destruct;
- (id)_identifyOwnedTokenSequences:(id)a0;
- (id)_identifyStrings:(id)a0 otherDateCount:(unsigned long long)a1 otherDates:(struct RKEventIdentifierRange { unsigned long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; } *)a2;
- (id)identifyMessage:(id)a0;
- (id)identifyStrings:(id)a0;
- (id)identifyText:(id)a0;
- (id)initWithLanguageID:(id)a0;
- (void)resetEventIdentifierModel;

@end
