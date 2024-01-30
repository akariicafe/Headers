@interface _UIActivityIndicatorViewArtworkCacheKey : NSObject <NSCopying> {
    long long _style;
    double _width;
    long long _spokeCount;
    long long _spokeFrameRatio;
    struct CGSize { double width; double height; } _shadowOffset;
    struct CGColor { } *_color;
    struct CGColor { } *_shadowColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithStyle:(long long)a0 width:(double)a1 spokeCount:(long long)a2 spokeFrameRatio:(long long)a3 shadowOffset:(struct CGSize { double x0; double x1; })a4 color:(struct CGColor { } *)a5 shadowColor:(struct CGColor { } *)a6;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCacheKey:(id)a0;

@end
