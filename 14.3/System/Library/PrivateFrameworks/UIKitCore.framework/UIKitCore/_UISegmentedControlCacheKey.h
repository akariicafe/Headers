@interface _UISegmentedControlCacheKey : NSObject <NSCopying> {
    struct CGSize { double width; double height; } _size;
    double _cornerRadius;
    double _scale;
    unsigned long long _state;
    struct CGColor { } *_primaryColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSize:(int)a0 scale:(double)a1 primaryColor:(struct CGColor { } *)a2 background:(BOOL)a3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCornerRadius:(double)a0 capSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 state:(unsigned long long)a3 primaryColor:(struct CGColor { } *)a4;
- (BOOL)isEqualToCacheKey:(id)a0;

@end
