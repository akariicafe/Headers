@class SPQueryTask, NSArray, NSString, SFResultSection, SPQueryResponse, NSObject;
@protocol SPSearchAgentDelegate;

@interface SPUISearchModel : NSObject <SPQueryTaskDelegate> {
    long long _updatesDisabled;
    NSString *_lastQueryString;
}

@property (retain) SPQueryTask *queryTask;
@property (retain) SPQueryResponse *lastResponse;
@property BOOL springBoardIsActive;
@property BOOL infinitePatience;
@property BOOL queryPartiallyComplete;
@property BOOL queryComplete;
@property BOOL forceStableResults;
@property (readonly) BOOL wantsCompletions;
@property (readonly) NSArray *sections;
@property (readonly) SFResultSection *searchThroughSection;
@property (retain) NSObject<SPSearchAgentDelegate> *delegate;
@property long long maxUISuggestions;

+ (id)sharedInstance;
+ (void)preheat;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;
+ (id)sharedGeneralInstance;
+ (id)sharedFullZWKInstance;

- (void)clear;
- (void)didReceiveResponse:(id)a0;
- (void)enableUpdates;
- (void)disableUpdates;
- (BOOL)queryInProgress;
- (void)updatesDisabled;
- (void).cxx_destruct;
- (void)activate;
- (void)updateWithQueryContext:(id)a0;
- (void)invalidate;
- (void)deactivate;
- (void)updatesEnabled;
- (void)updateWithResponse:(id)a0;
- (void)invalidateQuery:(id)a0;
- (void)resultsDidBecomeInvalid:(id)a0;
- (void)invalidateCurrentQuery;
- (BOOL)_suggestionsReadyForDisplay;

@end
