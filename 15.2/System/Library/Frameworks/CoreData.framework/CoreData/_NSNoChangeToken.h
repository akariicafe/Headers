@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (id)description;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
