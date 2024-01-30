@class NSArray, PARSession;

@interface SPClientSession : NSObject {
    NSArray *_searchDomains;
    BOOL _observersAdded;
    int _prefsToken;
    PARSession *_session;
    long long _contentFilter;
}

@property (readonly) NSArray *disabledBundleIds;
@property (nonatomic) BOOL infinitePatience;
@property long long maxUISuggestions;

+ (void)initialize;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;

- (void)preheat;
- (id)init;
- (BOOL)_setSearchDomains:(id)a0;
- (void).cxx_destruct;
- (id)queryTaskWithContext:(id)a0;
- (long long)contentFilters;
- (void)activate;
- (void)finishRanking:(id)a0 blendingDuration:(double)a1;
- (void)deactivate;

@end
