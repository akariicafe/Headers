@class NSArray, NSMutableString, NSMutableOrderedSet, NSString, NSMutableArray;

@interface AXLanguageTaggedContent : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _currentChunk;
    BOOL _predictedByTagger;
    void *_nlTagger;
    void *_namedEntityTagger;
}

@property (retain, nonatomic) NSMutableString *contentString;
@property (nonatomic, getter=isTagged) BOOL tagged;
@property (retain, nonatomic) NSMutableArray *tags;
@property (retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps;
@property (retain, nonatomic) NSMutableOrderedSet *predictedSecondaryLangMaps;
@property (retain, nonatomic) NSArray *currentDialects;
@property (retain, nonatomic) NSArray *shorthandDateMatches;
@property (nonatomic) unsigned long long nextShorthandDateIndex;
@property (readonly, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *userPreferredLangID;

- (id)_allLangIDs;
- (BOOL)_isNamedEntity:(id)a0;
- (BOOL)_addLanguageTagForDateIfNecessary;
- (int)langIDforLangCode:(id)a0;
- (struct { int x0; float x1; } *)_languageHintsEvenlyDistributedWithProbability:(float)a0 excludingHints:(id)a1;
- (id)langCodeForlangId:(int)a0;
- (id)_overrideLanguageDetection:(id)a0;
- (void)_searchForShorthandDates;
- (void)_manuallyProcessContentWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_addLanguageTagForCurrentChunk;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (BOOL)_isStringCombinationOfCommonAndEmoji:(id)a0;
- (void)enumerateUnpredictedTags:(id /* block */)a0;
- (void)enumeratePredictedTags:(id /* block */)a0;
- (BOOL)langMapIsSignificant:(id)a0;
- (id)significantAmbiguousLangMaps;
- (BOOL)hasOnlyWesternLangMaps;
- (void)_addTag;
- (id)description;
- (void)tagContent;
- (void).cxx_destruct;
- (BOOL)hasOnlyNonWesternLangMaps;
- (void)updateTagsForLocalePrefChange;
- (id)ambiguousLangMaps;
- (id)unambiguousLangMaps;
- (void)appendLanguageTaggedContent:(id)a0;
- (id)primaryUnambiguousDialect;
- (id)primaryAmbiguousDialect;
- (id)initWithContent:(id)a0;
- (void)dealloc;

@end
