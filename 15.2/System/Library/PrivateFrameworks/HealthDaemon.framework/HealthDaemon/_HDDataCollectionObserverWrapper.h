@class HDDataCollectionObserverState;

@interface _HDDataCollectionObserverWrapper : NSObject {
    id _observer;
    HDDataCollectionObserverState *_state;
    double _collectionInterval;
}

- (id)description;
- (void).cxx_destruct;

@end
