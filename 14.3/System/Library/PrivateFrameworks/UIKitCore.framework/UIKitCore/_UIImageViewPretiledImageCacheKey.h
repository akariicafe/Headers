@class UIImage;

@interface _UIImageViewPretiledImageCacheKey : NSObject {
    UIImage *_originalImage;
    struct CGSize { double width; double height; } _pretiledSize;
}

+ (id)cacheKeyWithOriginalImage:(id)a0 pretiledSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
