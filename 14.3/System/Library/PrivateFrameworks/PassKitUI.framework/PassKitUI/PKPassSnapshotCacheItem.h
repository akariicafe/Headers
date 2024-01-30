@interface PKPassSnapshotCacheItem : NSObject {
    struct CGImage { } *_image;
    double _scale;
}

- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (void)dealloc;
- (id)UIImageFromCache;

@end
