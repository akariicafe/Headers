@class BKSHIDEventDisplay, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeferringPredicate : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithEnvironment:(id)a0 display:(id)a1 token:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
