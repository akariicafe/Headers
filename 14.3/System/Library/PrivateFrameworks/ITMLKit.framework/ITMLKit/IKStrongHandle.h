@interface IKStrongHandle : IKHandle {
    id _object;
}

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (id)object;

@end
