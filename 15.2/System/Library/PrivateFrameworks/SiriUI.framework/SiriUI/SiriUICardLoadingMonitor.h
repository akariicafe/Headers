@class NSMutableArray;

@interface SiriUICardLoadingMonitor : NSObject {
    NSMutableArray *_observers;
}

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isTrackingObserver:(id)a0;
- (void)broadcastCardSnippet:(id)a0;

@end
