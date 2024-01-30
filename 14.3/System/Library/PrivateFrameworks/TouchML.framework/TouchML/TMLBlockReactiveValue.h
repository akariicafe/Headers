@interface TMLBlockReactiveValue : TMLReactiveValue {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)value;
- (id)initWithBlock:(id /* block */)a0 bindings:(id)a1 valueType:(unsigned long long)a2;

@end
