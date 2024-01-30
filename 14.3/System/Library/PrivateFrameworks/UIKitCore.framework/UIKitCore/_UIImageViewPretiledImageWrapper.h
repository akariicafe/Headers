@class UIImage, _UIImageViewPretiledImageCacheKey;

@interface _UIImageViewPretiledImageWrapper : NSObject {
    _UIImageViewPretiledImageCacheKey *_cacheKey;
}

@property (readonly, nonatomic) UIImage *pretiledImage;

+ (id)cacheValueWithPretiledImage:(id)a0 cacheKey:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
