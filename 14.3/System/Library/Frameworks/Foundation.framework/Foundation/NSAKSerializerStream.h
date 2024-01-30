@interface NSAKSerializerStream : NSObject <NSSerializerStream> {
    void *memory;
    unsigned long long current;
    unsigned long long max;
    struct __CFDictionary { } *roomForIntLocations;
}

- (unsigned long long)writeInt:(unsigned long long)a0;
- (void)dealloc;
- (void)writeDelayedInt:(unsigned long long)a0 for:(int)a1;
- (void)copySerializationInto:(void *)a0;
- (unsigned long long)writeRoomForInt:(int *)a0;
- (unsigned long long)writeAlignedDataSize:(unsigned long long)a0;
- (unsigned long long)writeData:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToPath:(id)a0 safely:(BOOL)a1;

@end
