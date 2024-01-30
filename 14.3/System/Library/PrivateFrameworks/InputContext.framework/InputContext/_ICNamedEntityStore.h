@class NSArray, _ICTransientLexicon, NSMutableOrderedSet;

@interface _ICNamedEntityStore : NSObject {
    NSMutableOrderedSet *_recentNamedEntityQueue;
    _ICTransientLexicon *_wordLexicon;
    _ICTransientLexicon *_phraseLexicon;
    id /* block */ _wordFilteringBlock;
}

@property (copy, nonatomic) id /* block */ filteringBlock;
@property (readonly, nonatomic) NSArray *lexicons;

+ (id)tokenize:(id)a0;
+ (id)lexiconViews;

- (void)removeAllEntries;
- (void)removeEntry:(id)a0;
- (BOOL)areStringCharactersWhitelisted:(id)a0;
- (void)updateQueue:(id)a0 newEntity:(id)a1;
- (id)init;
- (void)removeEntriesBySource:(unsigned char)a0;
- (void).cxx_destruct;
- (void)addEntity:(id)a0 isDurable:(BOOL)a1;
- (struct USet { } *)exemplarSetForSupportedLocales;
- (id)filterWord:(id)a0;
- (void)addEntry:(id)a0 tokenizedNewEntity:(id)a1 source:(unsigned char)a2 type:(unsigned char)a3;
- (BOOL)isValidNamedEntity:(id)a0 explanation:(id *)a1;
- (void)reloadRecents;
- (BOOL)isFirstCandidateBetter:(id)a0 than:(id)a1;
- (void)removeEntry:(id)a0 source:(unsigned char)a1;
- (void)updateQueueFromString:(id)a0 newEntity:(id)a1;

@end
