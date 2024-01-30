@class NSString, NSUUID;

@interface HMFLogEventSessionVoucher : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 serviceName:(id)a1;

@end
