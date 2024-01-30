@interface VMUSimpleSerializer : VMUAbstractSerializer {
    void *_map;
    unsigned int _internCursor;
}

- (id)init;
- (void)dealloc;
- (unsigned int)serializeString:(id)a0;
- (void)serialize32:(unsigned int)a0;
- (void)serialize64:(unsigned long long)a0;
- (id)copyContiguousData;
- (unsigned int)serializeNullTerminatedBytes:(const char *)a0;
- (void)_serializeValues:(unsigned int *)a0 count:(unsigned int)a1;

@end
