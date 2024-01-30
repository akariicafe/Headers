@class REImage;

@interface REAccessoryImage : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) REImage *image;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
