@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding>

+ (BOOL)supportsSecureCoding;
+ (id)immutablePlaceholder;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (oneway void)release;
- (id)initWithFileSec:(struct _filesec { } *)a0;

@end
