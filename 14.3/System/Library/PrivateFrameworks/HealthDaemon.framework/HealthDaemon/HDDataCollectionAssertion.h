@class NSSet, HDDataCollectionManager, HDDataCollectionObserverState;

@interface HDDataCollectionAssertion : HDAssertion {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSSet *sampleTypes;
@property (readonly, nonatomic) double collectionInterval;
@property (readonly, weak, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (copy, nonatomic) HDDataCollectionObserverState *observerState;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOwnerIdentifier:(id)a0 sampleTypes:(id)a1 observerState:(id)a2 dataCollectionManager:(id)a3;

@end
