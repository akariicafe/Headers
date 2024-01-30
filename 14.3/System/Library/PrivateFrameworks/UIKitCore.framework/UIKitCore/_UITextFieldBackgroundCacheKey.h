@class NSString;

@interface _UITextFieldBackgroundCacheKey : NSObject <NSCopying> {
    NSString *_className;
    double _scale;
    double _cornerRadius;
    double _lineWidth;
    struct CGColor { } *_strokeColor;
    struct CGColor { } *_fillColor;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithClassName:(id)a0 scale:(double)a1 cornerRadius:(double)a2 lineWidth:(double)a3 strokeColor:(struct CGColor { } *)a4 fillColor:(struct CGColor { } *)a5;
- (BOOL)isEqualToCacheKey:(id)a0;

@end
