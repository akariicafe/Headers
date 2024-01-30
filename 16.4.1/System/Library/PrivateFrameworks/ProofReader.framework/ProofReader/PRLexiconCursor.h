@class PRLexicon;

@interface PRLexiconCursor : NSObject {
    PRLexicon *_lexicon;
    struct _LXCursor { } *_cursor;
}

- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (BOOL)isValid;
- (void)dealloc;
- (BOOL)hasChildren;
- (BOOL)hasEntries;
- (double)prefixProbability;
- (double)terminationProbability;
- (id)initWithLexicon:(id)a0;
- (void)_advance:(id)a0;
- (void)_enumerateCompletions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)advanceWithCombinedCharacterSequence:(id)a0;
- (void)advanceWithString:(id)a0;
- (void)enumerateCompletionEntries:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateCompletions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
