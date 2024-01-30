@class NSArray, NSString, NSData, NSNumber;

@interface MTROTASoftwareUpdateProviderClusterQueryImageParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *vendorId;
@property (copy, nonatomic) NSNumber *productId;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSArray *protocolsSupported;
@property (copy, nonatomic) NSNumber *hardwareVersion;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSNumber *requestorCanConsent;
@property (copy, nonatomic) NSData *metadataForProvider;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
