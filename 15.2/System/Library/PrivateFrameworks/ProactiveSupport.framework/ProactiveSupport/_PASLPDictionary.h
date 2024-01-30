@class _PASLPDictionaryContext;
@protocol _PASLPReaderProtocol;

@interface _PASLPDictionary : NSDictionary <NSFastEnumeration> {
    id<_PASLPReaderProtocol> _reader;
    _PASLPDictionaryContext *_context;
}

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)allValues;
- (id)allKeys;
- (id)initWithLazyPlistReader:(id)a0 context:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)init;
- (id)allKeysForObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
