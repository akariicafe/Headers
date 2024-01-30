@class PRLexicon;

@interface PRLexiconCursor : NSObject {
    PRLexicon *_lexicon;
    struct _LXCursor { } *_cursor;
}

- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)isValid;
- (BOOL)hasChildren;
- (void)_advance:(id)a0;
- (id)initWithLexicon:(id)a0;
- (double)prefixProbability;
- (void)_enumerateCompletions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)advanceWithCombinedCharacterSequence:(id)a0;
- (void)advanceWithString:(id)a0;
- (BOOL)hasEntries;
- (double)terminationProbability;
- (void)enumerateCompletions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateCompletionEntries:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
