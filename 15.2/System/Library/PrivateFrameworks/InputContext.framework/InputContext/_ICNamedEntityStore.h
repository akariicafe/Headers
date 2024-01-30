@class NSString, _ICTransientLexicon, NSMutableOrderedSet, _ICLexiconView;

@interface _ICNamedEntityStore : NSObject {
    NSMutableOrderedSet *_leastRecentlyAddedEntities;
    unsigned long long _maximumRecentlyAddedEntities;
}

@property (retain, nonatomic) _ICTransientLexicon *wordLexiconImpl;
@property (retain, nonatomic) _ICTransientLexicon *phraseLexiconImpl;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) _ICLexiconView *wordLexicon;
@property (readonly, nonatomic) _ICLexiconView *phraseLexicon;
@property (readonly, nonatomic) unsigned long long durableEntitiesAdded;
@property (readonly, nonatomic) unsigned long long recentEntitiesAdded;
@property (nonatomic) unsigned long long minimumWordLength;
@property (nonatomic) BOOL treatHyphenatedWordAsPhrase;

+ (id)tokenize:(id)a0;

- (struct USet { } *)exemplarSetForSupportedLocales;
- (BOOL)entityIsHyphenatedWord:(id)a0;
- (BOOL)areStringCharactersWhitelisted:(id)a0;
- (void)addEntity:(id)a0 isDurable:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 maximumRecentlyAddedEntities:(unsigned long long)a1;
- (BOOL)isValidNamedEntity:(id)a0 explanation:(id *)a1;
- (void)removeAllEntities;
- (id)_adjustWordsForHyphenationIfNeeded:(id)a0 didAdjust:(BOOL *)a1;
- (BOOL)isCloserToTitleCase:(id)a0 than:(id)a1;
- (void)reloadRecents;

@end
