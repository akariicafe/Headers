@interface SKUISizeValue : NSObject <NSCopying> {
    long long _height;
    long long _width;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)unionWithSize:(struct CGSize { double x0; double x1; })a0;

@end
