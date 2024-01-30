@class REImage;

@interface REAccessoryImage : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) REImage *image;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
