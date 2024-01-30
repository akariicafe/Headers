@class NSString;

@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *machineID;
@property (copy, nonatomic) NSString *oneTimePassword;
@property (nonatomic) unsigned long long routingInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
