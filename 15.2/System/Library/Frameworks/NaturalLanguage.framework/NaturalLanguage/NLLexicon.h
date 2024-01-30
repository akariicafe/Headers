@class NSString;

@interface NLLexicon : NSObject {
    NSString *_localization;
    const void *_lexicon;
}

@property (readonly, copy) NSString *localization;

+ (id)lexiconWithOptions:(id)a0 error:(id *)a1;

- (id)languages;
- (id)description;
- (void).cxx_destruct;
- (struct _LXLexicon { } *)lexicon;
- (void)dealloc;
- (id)language;
- (BOOL)getProbabilityForString:(id)a0 probability:(double *)a1;
- (BOOL)getProbabilityForTokenID:(unsigned int)a0 probability:(double *)a1;
- (id)initWithLocalization:(id)a0 error:(id *)a1;
- (void)_enumerateEntriesForString:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithLocalization:(id)a0;
- (id)entryForTokenID:(unsigned int)a0;
- (id)entryForString:(id)a0;
- (void)enumerateCompletionsForPrefix:(id)a0 usingBlock:(id /* block */)a1;
- (long long)lexiconType;

@end
