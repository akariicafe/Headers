@class NSString;

@interface PRLexicon : NSObject {
    NSString *_localization;
    NSString *_unigramsPath;
    const void *_lexicon;
}

+ (id)lexiconWithLocalization:(id)a0 unigramsPath:(id)a1;
+ (id)lexiconWithLexicon:(const void *)a0;

- (id)initWithLocalization:(id)a0 unigramsPath:(id)a1;
- (id)createCursor;
- (void)enumerateCompletionsForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (BOOL)getProbabilityForString:(id)a0 probability:(double *)a1;
- (void)dealloc;
- (void)enumerateEntriesForString:(id)a0 usingBlock:(id /* block */)a1;
- (id)stringForTokenID:(unsigned int)a0;
- (id)initWithLexicon:(const void *)a0;
- (id)description;
- (BOOL)getProbabilityForTokenID:(unsigned int)a0 probability:(double *)a1;
- (void)enumerateCompletionEntriesForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (struct _LXLexicon { } *)lexicon;
- (unsigned int)tokenIDForString:(id)a0;
- (void)enumerateCorrectionEntriesForWord:(id)a0 maxCorrections:(unsigned long long)a1 withBlock:(id /* block */)a2;

@end
