@interface CPMemoryPoolFile : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    int _fd;
    char *_slots;
    unsigned long long _slotCount;
    unsigned long long _slotLength;
    struct __CFBitVector { } *_usedSlots;
    struct __CFAllocator { } *_deallocator;
}

- (id)nextSlotWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)dealloc;
- (id)initWithLabel:(const char *)a0 slotCount:(unsigned long long)a1 slotLength:(unsigned long long)a2;
- (void)returnSlot:(void *)a0;

@end
