@interface PMCachedBitmapObject : NSObject {
    struct shared_ptr<PCBitmap> { struct PCBitmap *x0; struct __shared_weak_count *x1; } *_bitmap;
}

- (void)dealloc;
- (struct shared_ptr<PCBitmap> { struct PCBitmap *x0; struct __shared_weak_count *x1; })bitmap;
- (id)initWithBitmap:(const struct shared_ptr<PCBitmap> { struct PCBitmap *x0; struct __shared_weak_count *x1; } *)a0;

@end
