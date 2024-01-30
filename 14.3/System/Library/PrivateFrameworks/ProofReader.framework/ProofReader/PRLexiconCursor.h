@class PRLexicon;

@interface PRLexiconCursor : NSObject {
    PRLexicon *_lexicon;
    struct _LXCursor { } *_cursor;
}

- (void)enumerateCompletions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasChildren;
- (double)prefixProbability;
- (BOOL)hasEntries;
- (void)dealloc;
- (void)enumerateCompletionEntries:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)isValid;
- (void)advanceWithCombinedCharacterSequence:(id)a0;
- (id)initWithLexicon:(id)a0;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (void)_advance:(id)a0;
- (double)terminationProbability;
- (void)advanceWithString:(id)a0;
- (void)_enumerateCompletions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
