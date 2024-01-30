@class NSMutableArray, LPFetcherConfiguration;

@interface LPFetcherGroup : NSObject {
    LPFetcherConfiguration *_configuration;
    long long _responsePolicy;
    id /* block */ _completionHandler;
    NSMutableArray *_tasks;
    BOOL _doneAddingFetchers;
    BOOL _done;
    BOOL _cancelled;
    unsigned int _loggingID;
}

- (void)_completed;
- (void).cxx_destruct;
- (void)cancel;
- (void)startFetchesIfNeeded;
- (void)_addFetcher:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)numberOfActiveFetches;
- (void)evaluateCompleteness;
- (id)_responsesRespectingPolicy;
- (id)initWithPolicy:(long long)a0 configuration:(id)a1 description:(id)a2 completionHandler:(id /* block */)a3;
- (void)appendFetcher:(id)a0;
- (void)prependFetcher:(id)a0;
- (void)doneAddingFetchers;

@end
