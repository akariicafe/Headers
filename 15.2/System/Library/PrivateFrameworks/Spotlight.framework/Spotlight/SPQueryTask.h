@class NSString, NSArray, SPQueryResponse, NSObject;
@protocol OS_dispatch_queue, SPQueryTaskDelegate;

@interface SPQueryTask : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SPQueryResponse *_delayedResponse;
    NSArray *_supportedAppScopes;
    BOOL _sentSuggestions;
    _Atomic int _updatesDisabled;
    _Atomic struct WaitingResults_s *_deferredUpdate;
}

@property (retain, nonatomic) NSString *rankingDebugLog;
@property (retain, nonatomic) NSString *sessionEntityString;
@property (readonly) NSObject<OS_dispatch_queue> *queryProcessor;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) int state;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL live;
@property (nonatomic) int unsafeState;
@property (retain) NSArray *showMoreInAppInfo;
@property long long maxUISuggestions;
@property (weak, nonatomic) NSObject<SPQueryTaskDelegate> *delegate;
@property (nonatomic) BOOL forceStableResults;
@property (readonly) NSString *searchString;
@property (nonatomic) unsigned long long whyQuery;
@property (nonatomic) unsigned long long queryKind;
@property (nonatomic) unsigned long long maxTopHitAppResults;

+ (void)initialize;

- (void)clear;
- (void)enableUpdates;
- (void)disableUpdates;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)updateResultsThroughDelegate:(BOOL)a0 state:(int)a1 sections:(id)a2;
- (void)pushAndPostUpdates;
- (void)postSearchAgentUpdatedResultsToDelegate:(id)a0;
- (BOOL)readyToUpdate;
- (void)updateResultsThroughDelegate:(BOOL)a0 state:(int)a1 unchanged:(BOOL)a2 sections:(id)a3;

@end
