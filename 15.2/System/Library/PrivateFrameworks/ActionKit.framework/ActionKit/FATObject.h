@interface FATObject : NSObject <NSCoding, NSCopying>

+ (id)structName;
+ (id)structFields;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)write:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)read:(id)a0;

@end
