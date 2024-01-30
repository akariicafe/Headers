@interface NSFilterObservationTransformer : NSObservationTransformer {
    id _predicate;
}

+ (id)filterWithBlock:(id /* block */)a0;

- (id)initWithBlock:(id /* block */)a0;
- (void)_receiveBox:(id)a0;
- (void)dealloc;

@end
