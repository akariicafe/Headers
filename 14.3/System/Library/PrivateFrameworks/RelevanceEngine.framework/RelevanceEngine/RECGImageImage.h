@interface RECGImageImage : REImage

@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) double scale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(double)a1;

@end
