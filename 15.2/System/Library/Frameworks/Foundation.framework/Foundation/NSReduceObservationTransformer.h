@interface NSReduceObservationTransformer : NSObservationTransformer {
    id /* block */ _reducer;
    id _accumulator;
}

+ (id)reduceValue:(id)a0 withReducer:(id /* block */)a1;

- (void)_receiveBox:(id)a0;
- (void)finishObserving;
- (id)initWithBlock:(id /* block */)a0 initialValue:(id)a1;
- (void)dealloc;

@end
