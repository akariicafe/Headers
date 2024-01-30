@interface TMLBlockReactiveValue : TMLReactiveValue {
    id /* block */ _block;
}

- (id)value;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0 bindings:(id)a1 valueType:(unsigned long long)a2;

@end
