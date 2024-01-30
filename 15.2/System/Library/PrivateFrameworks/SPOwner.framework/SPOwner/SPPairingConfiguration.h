@class NSString, NSData;

@interface SPPairingConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *roleEmoji;
@property (copy, nonatomic) NSData *collaborativeKeyC3;
@property (copy, nonatomic) NSData *signatureS4;
@property (copy, nonatomic) NSData *keyStatus;
@property (nonatomic) BOOL isZeus;
@property (nonatomic) long long batteryLevel;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 roleId:(long long)a1 roleEmoji:(id)a2 keyStatus:(id)a3 collaborativeKeyC3:(id)a4 signatureS4:(id)a5 isZeus:(BOOL)a6 batteryLevel:(long long)a7;

@end
