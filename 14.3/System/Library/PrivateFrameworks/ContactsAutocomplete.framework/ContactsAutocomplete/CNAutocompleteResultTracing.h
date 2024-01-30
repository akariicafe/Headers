@interface CNAutocompleteResultTracing : NSObject {
    unsigned long long _countOfRecentsResults;
    unsigned long long _countOfContactsResults;
    unsigned long long _countOfServerResults;
    double _startTime;
    double _localLatency;
    double _serverLatency;
    BOOL _waitingForRecentsResults;
    BOOL _waitingForContactsResults;
    BOOL _waitingForServerResults;
}

@property unsigned long long countOfRecentsResults;
@property unsigned long long countOfContactsResults;
@property unsigned long long countOfServerResults;

+ (id)resultTracer;

- (id)init;
- (void)logLocalLatencyIfReady;
- (void)sendMessageTracersIfReady;
- (void)logServerLatency;
- (void)sendMessageTracers;
- (void)sendLocalResultsTracer;
- (void)sendServerResultsTracer;
- (void)expectRecentsResults:(BOOL)a0;
- (void)expectContactsResults:(BOOL)a0;
- (void)expectServerResults:(BOOL)a0;

@end
