@interface RECGImageImage : REImage

@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) double scale;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(double)a1;

@end
