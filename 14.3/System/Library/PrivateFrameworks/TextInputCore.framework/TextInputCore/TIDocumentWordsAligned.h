@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject

@property (retain, nonatomic) NSMutableArray *inDocumentWordsStack;
@property (retain, nonatomic) NSMutableDictionary *leftContextToWordMap;

- (void)insertWord:(id)a0 atIndex:(long long)a1;
- (id)init;
- (unsigned long long)wordsCount;
- (void).cxx_destruct;
- (id)lastWord;
- (id)updateWordEntryAtIndex:(unsigned long long)a0 withAcceptedString:(id)a1 documentContext:(id)a2;
- (void)removeFromContextMap:(id)a0;
- (id)description;
- (void)pushWordToDocument:(id)a0;
- (id)wordsForContext:(id)a0;
- (int)deleteWordsUptoContext:(id)a0;
- (void)addToContextMap:(id)a0;

@end
