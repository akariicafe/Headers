@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)init;
- (id)autorelease;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
