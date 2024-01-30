@interface IKWeakHandle : IKHandle {
    id _object;
    id /* block */ _getter;
}

- (id)object;
- (void).cxx_destruct;
- (id)initWithGetter:(id /* block */)a0;

@end
