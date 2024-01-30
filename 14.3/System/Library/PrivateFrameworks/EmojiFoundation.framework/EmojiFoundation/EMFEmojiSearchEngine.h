@class EMFStringStemmer, EMFIndexManager, EMFQueryResultOverrideList, NSLocale, EMFQueryLogger;
@protocol EMFAutocompleteCandidateProvider;

@interface EMFEmojiSearchEngine : NSObject {
    const struct __EmojiLocaleDataWrapper { } *_localeData;
    EMFQueryLogger *_queryLogger;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) EMFIndexManager *indexManager;
@property (readonly, nonatomic) EMFStringStemmer *stringStemmer;
@property (readonly, nonatomic) id<EMFAutocompleteCandidateProvider> autocompleteProvider;
@property (readonly, nonatomic) EMFQueryResultOverrideList *overrideList;
@property (nonatomic) BOOL enableAutocomplete;

+ (BOOL)isLocaleSupported:(id)a0;

- (void)preheat;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (id)initWithLocale:(id)a0 andAssetBundle:(id)a1;
- (id)initWithLocale:(id)a0 andIndexManager:(id)a1 andStringStemmer:(id)a2 andAutocompleteProvider:(id)a3;
- (id)_performStringQueryUntokenized:(id)a0 usingIndex:(id)a1;
- (id)_performStringQueryOverride:(id)a0 usingIndex:(id)a1;
- (id)_performStringQuery:(id)a0 usingIndex:(id)a1 shouldAutocomplete:(BOOL)a2 shouldStem:(BOOL)a3;
- (id)performQuery:(id)a0 usingIndex:(id)a1;
- (id)_performAutocompletedQueryForQuery:(id)a0 usingIndex:(id)a1;
- (id)performStringQuery:(id)a0;

@end
