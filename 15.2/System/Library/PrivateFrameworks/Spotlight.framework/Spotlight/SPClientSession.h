@class NSArray, PARSession, SPSearchQueryContext;

@interface SPClientSession : NSObject {
    NSArray *_searchDomains;
    BOOL _observersAdded;
    int _prefsToken;
    PARSession *_session;
    long long _contentFilter;
}

@property (readonly) NSArray *disabledBundleIds;
@property (retain) SPSearchQueryContext *currentQueryContext;
@property (nonatomic) BOOL infinitePatience;
@property long long maxUISuggestions;

+ (void)initialize;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;

- (void)preheat;
- (BOOL)_setSearchDomains:(id)a0;
- (id)queryTaskWithContext:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)finishRanking:(id)a0 blendingDuration:(double)a1;
- (long long)contentFilters;
- (void)deactivate;

@end
