@class NSString, NSDate;

@interface SPLostModeInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *phoneNumber;

- (id)initWithMessage:(id)a0 phoneNumber:(id)a1 timestamp:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
