@interface WBSPasswordLexiconWordList : WBSPasswordWordList {
    struct _LXLexicon { } *_lexicon;
}

+ (id)lexiconWordListWithIdentifier:(id)a0 localeIdentifier:(id)a1;

- (void)dealloc;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 lexicon:(struct _LXLexicon { } *)a1;

@end
