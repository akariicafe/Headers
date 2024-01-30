@class NSArray;

@interface MTSDeviceSetupExtensionSelectThreadNetworkRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSArray *threadScanResults;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithThreadScanResults:(id)a0;

@end
