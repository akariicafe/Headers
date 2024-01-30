@class NSMutableSet, NSObject;
@protocol OS_nw_activity;

@interface SiriCoreNetworkActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
    long long _state;
    long long _parentLabel;
    NSMutableSet *_connections;
    BOOL _hasStarted;
}

- (BOOL)hasStarted;
- (void)activate;
- (void)addConnection:(id)a0;
- (void)removeConnection:(id)a0;
- (void).cxx_destruct;
- (id)nwActivity;
- (void)setHasStarted:(BOOL)a0;
- (id)nwActivityToken;
- (long long)parentLabel;
- (int)_completionReasonToNWActivityCompletionReason:(long long)a0;
- (void)_networkActivityAbort;
- (void)_networkActivityRestart;
- (void)_networkActivityState:(long long)a0;
- (id)initWithLabel:(long long)a0 parent:(id)a1;
- (void)stopWithCompletionReason:(long long)a0 andError:(id)a1;

@end
