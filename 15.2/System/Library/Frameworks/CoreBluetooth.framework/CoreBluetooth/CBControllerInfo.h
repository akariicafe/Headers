@class NSArray, NSString, NSData, NSError;

@interface CBControllerInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSArray *audioLinkQualityArray;
@property (nonatomic) long long bluetoothState;
@property (copy, nonatomic) NSString *chipsetID;
@property (nonatomic) int discoverableState;
@property (copy, nonatomic) NSString *firmwareName;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSData *hardwareAddressData;
@property (nonatomic) char hciTransportType;
@property (nonatomic) int inquiryState;
@property (nonatomic) unsigned char lmpVersion;
@property (nonatomic) unsigned int productID;
@property (nonatomic) unsigned int supportedServices;
@property (nonatomic) unsigned short vendorID;
@property (nonatomic) unsigned char vendorIDSource;
@property (copy, nonatomic) NSError *lastChipsetInitError;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;

@end
