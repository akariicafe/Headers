@class NSArray, SPSearchQueryContext;

@interface SPClientSession : NSObject {
    NSArray *_searchDomains;
    BOOL _observersAdded;
    int _prefsToken;
    long long _contentFilter;
}

@property (readonly) NSArray *disabledBundleIds;
@property (retain) SPSearchQueryContext *currentQueryContext;
@property (nonatomic) BOOL infinitePatience;
@property long long maxUISuggestions;

+ (void)initialize;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;

- (void)deactivate;
- (long long)contentFilters;
- (void)preheat;
- (id)queryTaskWithContext:(id)a0;
- (void)finishRanking:(id)a0 blendingDuration:(double)a1;
- (BOOL)_setSearchDomains:(id)a0;
- (id)init;
- (void)activate;
- (void).cxx_destruct;

@end
