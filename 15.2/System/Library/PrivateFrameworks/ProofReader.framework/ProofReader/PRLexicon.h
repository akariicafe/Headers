@class NSString;

@interface PRLexicon : NSObject {
    NSString *_localization;
    NSString *_unigramsPath;
    const void *_lexicon;
}

+ (id)lexiconWithLocalization:(id)a0 unigramsPath:(id)a1;
+ (id)lexiconWithLexicon:(const void *)a0;

- (id)description;
- (struct _LXLexicon { } *)lexicon;
- (void)dealloc;
- (id)initWithLexicon:(const void *)a0;
- (unsigned int)tokenIDForString:(id)a0;
- (id)stringForTokenID:(unsigned int)a0;
- (void)enumerateCompletionEntriesForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (BOOL)getProbabilityForString:(id)a0 probability:(double *)a1;
- (void)enumerateCompletionsForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)enumerateEntriesForString:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateCorrectionEntriesForWord:(id)a0 maxCorrections:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)initWithLocalization:(id)a0 unigramsPath:(id)a1;
- (id)createCursor;
- (BOOL)getProbabilityForTokenID:(unsigned int)a0 probability:(double *)a1;

@end
