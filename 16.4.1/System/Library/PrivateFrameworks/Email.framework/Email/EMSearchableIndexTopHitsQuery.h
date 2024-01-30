@class NSLock, NSString, NSArray, NSMutableDictionary, CSTopHitQuery, NSObject, EFPromise, NSProgress, NSMutableArray;
@protocol OS_os_log;

@interface EMSearchableIndexTopHitsQuery : NSObject <EFLoggable, EFCancelable, NSProgressReporting>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) CSTopHitQuery *topHitSearchQuery;
@property (nonatomic) BOOL generateSuggestions;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSMutableArray *foundItems;
@property (retain, nonatomic) NSMutableArray *foundSuggestions;
@property (retain, nonatomic) NSMutableDictionary *foundMatchingHintsByPersistentID;
@property (retain, nonatomic) EFPromise *spotlightTopHitsQueryResultPromise;
@property (retain, nonatomic) EFPromise *spotlightTopHitsQuerySuggestionsResultPromise;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSProgress *internalProgress;
@property (retain, nonatomic) NSString *logPrefix;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, copy, nonatomic) NSArray *filterQueries;
@property (readonly, copy, nonatomic) NSString *keyboardLanguage;
@property (readonly, nonatomic) unsigned long long resultLimit;
@property (readonly, copy, nonatomic) NSString *logDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)_configureTopHitsSearchQuery:(id)a0;
- (void)_searchDidCompleteWithError:(id)a0;
- (void)_searchFoundItems:(id)a0;
- (void)_searchFoundSuggestions:(id)a0;
- (id)initWithSearchString:(id)a0 filterQueries:(id)a1 bundleID:(id)a2 keyboardLanguage:(id)a3 updatedSuggestion:(id)a4 generateSuggestions:(BOOL)a5 logDescription:(id)a6 resultLimit:(unsigned long long)a7 suggestionLimit:(unsigned long long)a8 customFlags:(id)a9;
- (id)topHitsQueryResult;
- (id)topHitsQuerySuggestionResult;

@end
