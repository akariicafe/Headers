@class NSObject, NSString, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *rankingDebugLog;

- (BOOL)forceStableResults;
- (void)clear;
- (void)_setInfinitePatience:(BOOL)a0;
- (void)setInfinitePatience:(BOOL)a0;
- (void)setMaxUISuggestions:(long long)a0;
- (void)setForceStableResults:(BOOL)a0;
- (BOOL)queryInProgress;
- (void)updatesDisabled;
- (long long)maxUISuggestions;
- (BOOL)shouldEnableOCR;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)updateWithQueryContext:(id)a0;
- (void)deactivate;
- (BOOL)infinitePatience;
- (void)updatesEnabled;

@end
