@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject

@property (retain, nonatomic) NSMutableArray *inDocumentWordsStack;
@property (retain, nonatomic) NSMutableDictionary *leftContextToWordMap;

- (id)preferredLeftContextToWordMapKeyForLeftContext:(id)a0 andMatchingLeftContext:(id)a1;
- (void)addToContextMap:(id)a0;
- (id)updateWordEntryAtIndex:(unsigned long long)a0 withAcceptedString:(id)a1 documentContext:(id)a2;
- (id)wordsForContext:(id)a0;
- (id)lastWord;
- (void)insertWord:(id)a0 atIndex:(long long)a1;
- (id)matchingLeftContextToWordMapKey:(id)a0;
- (void)replaceLeftContextToWordMapKey:(id)a0 withNewKey:(id)a1;
- (id)wordsFromContext:(id)a0;
- (id)deleteWordsUpToContext:(id)a0;
- (id)init;
- (id)_wordsFromContext:(id)a0 shouldDelete:(BOOL)a1;
- (id)description;
- (unsigned long long)wordsCount;
- (void)pushWordToDocument:(id)a0;
- (void).cxx_destruct;
- (void)removeFromContextMap:(id)a0;

@end
