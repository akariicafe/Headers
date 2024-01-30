@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned long long _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}

- (const void *)bytes;
- (void)setLength:(unsigned long long)a0;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (void *)mutableBytes;
- (unsigned long long)length;
- (id)init;
- (void)_destroyMemory;
- (void)dealloc;
- (id)description;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (BOOL)isContentDiscarded;
- (id)initWithCapacity:(unsigned long long)a0;

@end
