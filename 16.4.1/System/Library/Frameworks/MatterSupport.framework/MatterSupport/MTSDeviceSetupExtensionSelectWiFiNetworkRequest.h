@class NSArray;

@interface MTSDeviceSetupExtensionSelectWiFiNetworkRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSArray *wifiScanResults;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithWiFiScanResults:(id)a0;

@end
