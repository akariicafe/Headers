@interface VMUSimpleSerializer : VMUAbstractSerializer {
    void *_map;
    unsigned int _internCursor;
}

- (unsigned int)serializeString:(id)a0;
- (void)serialize32:(unsigned int)a0;
- (void)_serializeValues:(unsigned int *)a0 count:(unsigned int)a1;
- (id)init;
- (void)serialize64:(unsigned long long)a0;
- (id)copyContiguousData;
- (void)dealloc;
- (unsigned int)serializeNullTerminatedBytes:(const char *)a0;

@end
