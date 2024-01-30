@class NSDictionary, NSDate;

@interface ASDTestFlightServiceExtensionPushMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSDate *timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimestamp:(id)a0 userInfo:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
