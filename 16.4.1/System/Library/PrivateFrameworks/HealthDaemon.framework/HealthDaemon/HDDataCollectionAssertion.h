@class NSSet, HDDataCollectionManager, HDDataCollectionObserverState;

@interface HDDataCollectionAssertion : HDAssertion {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSSet *_sampleTypes;
    double _collectionInterval;
    HDDataCollectionManager *_dataCollectionManager;
}

@property (copy, nonatomic) HDDataCollectionObserverState *observerState;

- (id)description;
- (void).cxx_destruct;

@end
