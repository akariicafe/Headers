@interface NSNull : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)null;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)valueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)retain;
- (void)encodeWithCoder:(id)a0;

@end
