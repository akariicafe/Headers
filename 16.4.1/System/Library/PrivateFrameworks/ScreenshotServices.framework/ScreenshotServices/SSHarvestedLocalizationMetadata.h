@class NSString, SSHarvestedApplicationMetadata, SSHarvestedDeviceMetadata;

@interface SSHarvestedLocalizationMetadata : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) SSHarvestedApplicationMetadata *applicationMetadata;
@property (readonly, nonatomic) SSHarvestedDeviceMetadata *deviceMetadata;

- (void).cxx_destruct;
- (id)jsonEncodedData;
- (id)_runningAppInformation;
- (id)embeddedInImageData:(id)a0;
- (id)initFromDeviceMetadata:(id)a0 applicationMetadata:(id)a1 bundleIdentifier:(id)a2;
- (id)jsonEncodedString;
- (id)propertiesForImageData:(id)a0;

@end
