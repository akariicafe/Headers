@interface PMCachedBitmapObject : NSObject {
    void *_bitmap;
}

- (struct shared_ptr<PCBitmap> { struct PCBitmap *x0; struct __shared_weak_count *x1; })bitmap;
- (void)dealloc;
- (id)initWithBitmap:(const void *)a0;

@end
