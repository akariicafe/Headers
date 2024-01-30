@class NSData;

@interface HMDeviceSetupRequestMessage : TRRequestMessage

@property (readonly, copy, nonatomic) NSData *payload;
@property (nonatomic) long long qualityOfService;

+ (BOOL)supportsSecureCoding;

- (id)initWithPayload:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
