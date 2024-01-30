@interface REImage : NSObject <NSCopying, NSCoding>

+ (id)imageNamed:(id)a0 inBundle:(id)a1;
+ (id)imageWithData:(id)a0 scale:(double)a1;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
+ (id)imageWithContentsOfFileAtPath:(id)a0 scale:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
