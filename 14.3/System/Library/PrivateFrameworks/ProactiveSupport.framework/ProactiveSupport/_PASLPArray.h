@class _PASLPArrayContext;
@protocol _PASLPReaderProtocol;

@interface _PASLPArray : _PASLazyArrayBase <NSFastEnumeration> {
    id<_PASLPReaderProtocol> _reader;
    _PASLPArrayContext *_context;
}

- (id)init;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)count;
- (id)initWithLazyPlistReader:(id)a0 context:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;

@end
