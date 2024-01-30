@interface FATObject : NSObject <NSCoding, NSCopying>

+ (id)structName;
+ (id)structFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)write:(id)a0;
- (void)read:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
