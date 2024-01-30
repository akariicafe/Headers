@interface _UISearchBarBackgroundCacheKey : NSObject <NSCopying> {
    long long _barPosition;
    BOOL _usesContiguousBarBackground;
    double _scale;
    double _alpha;
    double _height;
    double _statusBarHeight;
    struct CGColor { } *_backgroundColor;
    struct CGColor { } *_strokeColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCacheKey:(id)a0;
- (unsigned long long)hash;
- (id)initWithBarPosition:(long long)a0 usesContiguousBarBackground:(BOOL)a1 scale:(double)a2 alpha:(double)a3 height:(double)a4 statusBarHeight:(double)a5 backgroundColor:(struct CGColor { } *)a6 strokeColor:(struct CGColor { } *)a7;

@end
