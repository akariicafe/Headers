@class REImage;

@interface REAccessoryImage : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) REImage *image;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
