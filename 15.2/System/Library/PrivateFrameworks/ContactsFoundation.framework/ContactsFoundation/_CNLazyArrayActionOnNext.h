@interface _CNLazyArrayActionOnNext : _CNLazyArrayOperator {
    id /* block */ _action;
}

- (id)nextObject;
- (id)initWithInput:(id)a0 action:(id /* block */)a1;
- (void).cxx_destruct;

@end
