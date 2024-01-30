@class NSMutableSet, NSObject;
@protocol OS_nw_activity;

@interface SiriCoreNetworkActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
    long long _state;
    long long _parentLabel;
    NSMutableSet *_connections;
    BOOL _hasStarted;
}

- (void)removeConnection:(id)a0;
- (id)nwActivity;
- (void)setHasStarted:(BOOL)a0;
- (id)nwActivityToken;
- (void).cxx_destruct;
- (void)activate;
- (void)addConnection:(id)a0;
- (BOOL)hasStarted;
- (long long)parentLabel;
- (id)initWithLabel:(long long)a0 parent:(id)a1;
- (void)stopWithCompletionReason:(long long)a0 andError:(id)a1;
- (void)_networkActivityState:(long long)a0;
- (int)_completionReasonToNWActivityCompletionReason:(long long)a0;
- (void)_networkActivityAbort;
- (void)_networkActivityRestart;

@end
