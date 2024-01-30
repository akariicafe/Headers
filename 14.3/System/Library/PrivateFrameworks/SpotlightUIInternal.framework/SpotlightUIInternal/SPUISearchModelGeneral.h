@class NSObject, NSString, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *rankingDebugLog;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)updatesEnabled;
- (void)updatesDisabled;
- (long long)maxUISuggestions;
- (BOOL)infinitePatience;
- (void)setForceStableResults:(BOOL)a0;
- (void)updateWithQueryContext:(id)a0;
- (void)activate;
- (BOOL)queryInProgress;
- (void)_setInfinitePatience:(BOOL)a0;
- (void)setInfinitePatience:(BOOL)a0;
- (BOOL)forceStableResults;
- (void)setMaxUISuggestions:(long long)a0;
- (void)deactivate;

@end
