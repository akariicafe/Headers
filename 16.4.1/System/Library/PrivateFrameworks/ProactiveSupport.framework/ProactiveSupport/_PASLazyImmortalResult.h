@interface _PASLazyImmortalResult : _PASLazyResult {
    _Atomic BOOL _done;
}

- (id)initWithResult:(id)a0;
- (id)result;
- (id)_initWithBlock:(id /* block */)a0;
- (id)resultIfAvailable;

@end
