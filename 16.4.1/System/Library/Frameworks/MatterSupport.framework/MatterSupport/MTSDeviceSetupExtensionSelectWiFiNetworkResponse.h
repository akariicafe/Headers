@class MTSWiFiNetworkAssociation;

@interface MTSDeviceSetupExtensionSelectWiFiNetworkResponse : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSWiFiNetworkAssociation *wifiNetworkAssociation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithWiFiNetworkAssociation:(id)a0;

@end
