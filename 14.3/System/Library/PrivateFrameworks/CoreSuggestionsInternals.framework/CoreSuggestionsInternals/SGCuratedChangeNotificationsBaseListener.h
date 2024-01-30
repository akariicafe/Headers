@class NSMapTable;

@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable *_liveObserversMap;
}

- (void)stopListening;
- (void)fire;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startListening;
- (void)addObserver:(id /* block */)a0 forObjectLifetime:(id)a1;

@end
