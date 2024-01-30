@class NSSet;

@interface WBSPasswordSetWordList : WBSPasswordWordList {
    NSSet *_words;
}

- (void).cxx_destruct;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 words:(id)a1;

@end
