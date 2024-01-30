@class NSData;

@interface HMDeviceSetupResponseMessage : TRResponseMessage

@property (readonly, copy, nonatomic) NSData *payload;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(id)a0;

@end
