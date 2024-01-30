@interface CUKeyValueStoreReader : NSObject {
    struct cdb { char *map; int fd; unsigned int size; unsigned int loop; unsigned int khash; unsigned int kpos; unsigned int hpos; unsigned int hslots; unsigned int dpos; unsigned int dlen; } _cdb;
    int _fd;
    Class _keyType;
    Class _valueType;
}

- (BOOL)enumerateValuesForKey:(id)a0 valueType:(Class)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)initWithKeyType:(Class)a0 valueType:(Class)a1;
- (BOOL)enumerateValuesForKey:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (id)_readObjectAtOffset:(unsigned int)a0 length:(unsigned int)a1 type:(Class)a2 error:(id *)a3;
- (void)dealloc;
- (id)valueForKey:(id)a0 valueType:(Class)a1 error:(id *)a2;
- (BOOL)enumerateKeyType:(Class)a0 valueType:(Class)a1 error:(id *)a2 handler:(id /* block */)a3;
- (void)close;
- (BOOL)openAtPath:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)valueExistsForKey:(id)a0;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (BOOL)enumerateKeysAndValuesAndReturnError:(id *)a0 handler:(id /* block */)a1;

@end
