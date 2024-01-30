@interface FATObject : NSObject <NSCoding, NSCopying>

+ (id)structName;
+ (id)structFields;

- (void)write:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)read:(id)a0;
- (id)description;

@end
