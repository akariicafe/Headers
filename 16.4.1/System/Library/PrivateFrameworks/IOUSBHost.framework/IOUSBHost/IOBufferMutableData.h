@interface IOBufferMutableData : NSMutableData {
    void *_bytes;
    unsigned long long _length;
}

@property (copy) id /* block */ deallocator;

- (const void *)bytes;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (void).cxx_destruct;

@end
