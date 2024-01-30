@class NWPathEvaluator;

@interface RTReachabilityManager : RTService {
    BOOL _observingReachabilityChanges;
}

@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (nonatomic) unsigned long long currentReachability;

+ (id)reachabilityToString:(unsigned long long)a0;

- (id)initWithPathEvaluator:(id)a0;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (unsigned long long)reachability;
- (void)_processReachabilityChange:(id)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)fetchCurrentReachability:(id /* block */)a0;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)currentReachabilityString;
- (void)_fetchCurrentReachability:(id /* block */)a0;

@end
