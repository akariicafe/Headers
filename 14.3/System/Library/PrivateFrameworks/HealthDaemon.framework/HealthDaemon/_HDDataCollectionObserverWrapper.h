@class HDDataCollectionObserverState;

@interface _HDDataCollectionObserverWrapper : NSObject

@property (readonly, weak, nonatomic) id observer;
@property (copy, nonatomic) HDDataCollectionObserverState *state;
@property (nonatomic) double collectionInterval;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObserver:(id)a0 state:(id)a1 collectionInterval:(double)a2;

@end
