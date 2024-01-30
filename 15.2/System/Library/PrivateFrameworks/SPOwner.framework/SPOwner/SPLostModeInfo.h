@class NSString, NSDate;

@interface SPLostModeInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *email;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(id)a0 email:(id)a1 phoneNumber:(id)a2 timestamp:(id)a3;

@end
