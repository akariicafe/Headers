@class NSString;

@interface NLLexicon : NSObject {
    NSString *_localization;
    const void *_lexicon;
}

@property (readonly, copy) NSString *localization;

- (void).cxx_destruct;
- (BOOL)getProbabilityForString:(id)a0 probability:(double *)a1;
- (void)dealloc;
- (id)description;
- (BOOL)getProbabilityForTokenID:(unsigned int)a0 probability:(double *)a1;
- (struct _LXLexicon { } *)lexicon;
- (void)_enumerateEntriesForString:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithLocalization:(id)a0;
- (id)entryForTokenID:(unsigned int)a0;
- (id)entryForString:(id)a0;
- (void)enumerateCompletionsForPrefix:(id)a0 usingBlock:(id /* block */)a1;

@end
