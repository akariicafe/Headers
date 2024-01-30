@interface IOBufferMutableData : NSMutableData {
    void *_bytes;
    unsigned long long _length;
}

@property (copy) id /* block */ deallocator;

- (void)setLength:(unsigned long long)a0;
- (void *)mutableBytes;
- (unsigned long long)length;
- (const void *)bytes;
- (void).cxx_destruct;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (void)dealloc;

@end
