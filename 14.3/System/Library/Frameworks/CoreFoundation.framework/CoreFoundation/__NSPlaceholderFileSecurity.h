@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding>

+ (id)immutablePlaceholder;
+ (BOOL)supportsSecureCoding;

- (id)initWithFileSec:(struct _filesec { } *)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (id)retain;
- (void)encodeWithCoder:(id)a0;

@end
