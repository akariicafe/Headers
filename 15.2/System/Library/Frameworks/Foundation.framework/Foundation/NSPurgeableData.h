@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned long long _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}

- (void)setLength:(unsigned long long)a0;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (void *)mutableBytes;
- (unsigned long long)length;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (id)description;
- (const void *)bytes;
- (void)_destroyMemory;
- (void)discardContentIfPossible;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)beginContentAccess;

@end
