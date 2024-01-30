@interface IKWeakHandle : IKHandle {
    id _object;
    id /* block */ _getter;
}

- (void).cxx_destruct;
- (id)object;
- (id)initWithGetter:(id /* block */)a0;

@end
