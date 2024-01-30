@interface BKSHIDEventAuthenticationKeyRetentionPolicy : NSObject <NSCopying>

@property (nonatomic) double keySigningTimeout;
@property (nonatomic) double keyVerificationTimeout;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
