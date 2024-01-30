@class NSString, NSUUID, MTSDeviceSetupHome;

@interface MTSDeviceSetupExtensionPairDeviceRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSDeviceSetupHome *home;
@property (readonly, copy) NSString *onboardingPayload;
@property (readonly, copy) NSUUID *deviceUUID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0 onboardingPayload:(id)a1 deviceUUID:(id)a2;

@end
