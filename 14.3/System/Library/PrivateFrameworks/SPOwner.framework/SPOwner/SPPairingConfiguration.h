@class NSString, NSData;

@interface SPPairingConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *roleEmoji;
@property (copy, nonatomic) NSData *collaborativeKeyC3;
@property (copy, nonatomic) NSData *signatureS4;
@property (copy, nonatomic) NSData *keyStatus;
@property (nonatomic) long long batteryLevel;

- (id)initWithName:(id)a0 roleId:(long long)a1 roleEmoji:(id)a2 keyStatus:(id)a3 collaborativeKeyC3:(id)a4 signatureS4:(id)a5 batteryLevel:(long long)a6;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
