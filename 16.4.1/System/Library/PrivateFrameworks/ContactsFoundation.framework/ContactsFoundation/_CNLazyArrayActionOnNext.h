@interface _CNLazyArrayActionOnNext : _CNLazyArrayOperator {
    id /* block */ _action;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0 action:(id /* block */)a1;

@end
