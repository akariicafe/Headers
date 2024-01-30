@class NSData;

@interface HMDeviceSetupResponseMessage : TRResponseMessage

@property (readonly, copy, nonatomic) NSData *payload;

+ (BOOL)supportsSecureCoding;

- (id)initWithPayload:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
