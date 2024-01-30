@interface NSFilterObservationTransformer : NSObservationTransformer {
    id _predicate;
}

+ (id)filterWithBlock:(id /* block */)a0;

- (void)_receiveBox:(id)a0;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;

@end
