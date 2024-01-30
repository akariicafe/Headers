@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject

@property (retain, nonatomic) NSMutableArray *inDocumentWordsStack;
@property (retain, nonatomic) NSMutableDictionary *leftContextToWordMap;

- (void)pushWordToDocument:(id)a0;
- (void)insertWord:(id)a0 atIndex:(long long)a1;
- (id)_wordsFromContext:(id)a0 shouldDelete:(BOOL)a1;
- (id)deleteWordsUpToContext:(id)a0;
- (id)description;
- (void)addToContextMap:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeFromContextMap:(id)a0;
- (id)wordsFromContext:(id)a0;
- (unsigned long long)wordsCount;
- (id)wordsForContext:(id)a0;
- (id)lastWord;
- (id)updateWordEntryAtIndex:(unsigned long long)a0 withAcceptedString:(id)a1 documentContext:(id)a2;

@end
