@class _PASCFBurstTrie;

@interface PMLLexicon : NSObject {
    _PASCFBurstTrie *_lexicon;
}

+ (BOOL)serializeLexiconToFile:(id)a0 tokenToWordIDDict:(id)a1;

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)getWordIDforToken:(id)a0;
- (unsigned long long)getTotalEntries;

@end
