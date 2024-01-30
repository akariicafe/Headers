@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isDeallocating;
- (id)init;
- (id)description;
- (id)autorelease;
- (unsigned long long)retainCount;

@end
