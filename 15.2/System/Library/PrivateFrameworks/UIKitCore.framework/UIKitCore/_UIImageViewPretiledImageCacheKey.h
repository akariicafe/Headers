@class UIImage;

@interface _UIImageViewPretiledImageCacheKey : NSObject {
    UIImage *_originalImage;
    struct CGSize { double width; double height; } _pretiledSize;
}

+ (id)cacheKeyWithOriginalImage:(id)a0 pretiledSize:(struct CGSize { double x0; double x1; })a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
