@interface CAMBufferObservance : NSObject

@property (nonatomic, getter=isFulfilled) BOOL fulfilled;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isRemovedOnceEnabled) BOOL removedOnceEnabled;
@property (readonly, copy, nonatomic) id /* block */ predicate;

- (void).cxx_destruct;
- (void)fulfillWithChange:(id)a0;
- (id)initWithPredicate:(id /* block */)a0 removedOnceEnabled:(BOOL)a1;
- (void)setupObservanceForBuffer:(id)a0;
- (BOOL)shouldBeFulfilledByChange:(id)a0;
- (void)teardownObservanceForBuffer:(id)a0;

@end
