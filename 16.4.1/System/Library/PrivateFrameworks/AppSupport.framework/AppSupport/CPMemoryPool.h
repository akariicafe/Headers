@class NSMutableArray;

@interface CPMemoryPool : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_files;
    char *_label;
}

@property (readonly, nonatomic) unsigned long long slotLength;

- (id)nextSlotWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)dealloc;
- (id)initWithLabel:(const char *)a0 slotLength:(unsigned long long)a1;

@end
