@interface NSNull : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)null;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)valueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (id)description;
- (id)autorelease;
- (unsigned long long)_cfTypeID;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (oneway void)release;

@end
