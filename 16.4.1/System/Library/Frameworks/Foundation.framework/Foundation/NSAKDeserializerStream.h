@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {
    const void *memory;
    const char *current;
    unsigned long long left;
    unsigned long long max;
    BOOL freeWhenDone;
}

- (void)dealloc;
- (int)readInt;
- (id)initFromMemoryNoCopy:(const void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initFromPath:(id)a0;
- (unsigned long long)readAlignedDataSize;
- (void)readData:(void *)a0 length:(unsigned long long)a1;

@end
