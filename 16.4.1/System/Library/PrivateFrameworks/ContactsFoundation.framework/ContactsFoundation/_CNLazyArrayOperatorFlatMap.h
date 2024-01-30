@class CNQueue;

@interface _CNLazyArrayOperatorFlatMap : _CNLazyArrayOperator {
    id /* block */ _transform;
    CNQueue *_buffer;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0 transform:(id /* block */)a1;

@end
