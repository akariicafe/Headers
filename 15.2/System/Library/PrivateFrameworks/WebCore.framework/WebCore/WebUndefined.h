@interface WebUndefined : NSObject <NSCoding, NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)undefined;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (id)description;
- (id)autorelease;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (oneway void)release;

@end
