@class SXAnimatedImageViewCache;

@interface SXAnimatedImageFrame : NSObject {
    SXAnimatedImageViewCache *_cache;
    struct CGImageSource { } *_imageSource;
    double _duration;
    unsigned long long _index;
    long long _imageType;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
