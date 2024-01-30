@class NSString, NLLexicon;

@interface NLLexiconCursor : NSObject {
    NLLexicon *_lexicon;
    struct _LXCursor { } *_cursor;
}

@property (readonly) BOOL hasEntries;
@property (readonly) BOOL hasChildren;
@property (readonly) double prefixProbability;
@property (readonly) double terminationProbability;
@property (readonly, copy) NSString *traversedString;

- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)initWithLexicon:(id)a0 cursor:(struct _LXCursor { } *)a1;
- (void)_enumerateEntriesUsingBlock:(id /* block */)a0;
- (id)initWithLexicon:(id)a0 string:(id)a1;
- (id)cursorByAdvancingWithString:(id)a0;
- (void)enumerateCompletionsUsingBlock:(id /* block */)a0;

@end
