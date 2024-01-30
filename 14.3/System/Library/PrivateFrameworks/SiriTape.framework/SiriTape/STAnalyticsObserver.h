@class NSMutableDictionary, AFAnalyticsObserverConnection;

@interface STAnalyticsObserver : NSObject {
    AFAnalyticsObserverConnection *_connection;
    NSMutableDictionary *_observerActions;
}

+ (id)sharedObserver;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)addObserverActionForType:(long long)a0 withBlock:(id /* block */)a1;

@end
