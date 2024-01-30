@interface TSKAnimatedGIFFrame : NSObject {
    struct CGImageSource { } *_imageSource;
    struct CGImage { } *_preloadedImage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _imageLock;
}

@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) double time;

- (id)description;
- (void)dealloc;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 index:(unsigned long long)a1 time:(double)a2 preloadImage:(BOOL)a3;

@end
