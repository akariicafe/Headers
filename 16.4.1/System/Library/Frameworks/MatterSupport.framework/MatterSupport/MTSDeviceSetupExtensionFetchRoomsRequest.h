@class MTSDeviceSetupHome;

@interface MTSDeviceSetupExtensionFetchRoomsRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSDeviceSetupHome *home;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;

@end
