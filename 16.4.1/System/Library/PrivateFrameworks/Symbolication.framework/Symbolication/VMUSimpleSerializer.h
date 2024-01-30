@interface VMUSimpleSerializer : VMUAbstractSerializer {
    void *_map;
    unsigned int _internCursor;
}

- (unsigned int)serializeString:(id)a0;
- (unsigned int)serializeNullTerminatedBytes:(const char *)a0;
- (void)_serializeValues:(unsigned int *)a0 count:(unsigned int)a1;
- (void)serialize64:(unsigned long long)a0;
- (void)dealloc;
- (id)copyContiguousData;
- (void)serialize32:(unsigned int)a0;
- (id)init;

@end
