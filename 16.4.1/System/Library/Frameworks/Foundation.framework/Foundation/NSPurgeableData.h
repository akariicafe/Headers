@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned long long _length;
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; } *_reserved;
    int _accessCount;
}

- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (const void *)bytes;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (void)discardContentIfPossible;
- (void)_destroyMemory;
- (unsigned long long)length;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (BOOL)beginContentAccess;

@end
