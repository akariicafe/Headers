@class NSObject, NSString, SPClientSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelGeneral : SPUISearchModel

@property (retain) SPClientSession *session;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *rankingDebugLog;

- (void)deactivate;
- (BOOL)infinitePatience;
- (void)setInfinitePatience:(BOOL)a0;
- (void)updatesDisabled;
- (BOOL)shouldEnableOCR;
- (void)updatesEnabled;
- (void)_setInfinitePatience:(BOOL)a0;
- (BOOL)forceStableResults;
- (void)updateWithQueryContext:(id)a0;
- (void)setForceStableResults:(BOOL)a0;
- (void)setMaxUISuggestions:(long long)a0;
- (id)init;
- (void)activate;
- (void)clear;
- (long long)maxUISuggestions;
- (BOOL)queryInProgress;
- (void).cxx_destruct;

@end
