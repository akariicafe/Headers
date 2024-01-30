@class NSArray, NSString, NSData, NSNumber;

@interface HMMTRSoftwareUpdateProviderQueryImageRequestParams : NSObject

@property (readonly) NSNumber *vendorId;
@property (readonly) NSNumber *productId;
@property (readonly) NSNumber *softwareVersion;
@property (readonly) NSArray *protocolsSupported;
@property (readonly) NSNumber *hardwareVersion;
@property (readonly) NSString *location;
@property (readonly) NSNumber *requestorCanConsent;
@property (readonly) NSData *metadataForProvider;

- (void).cxx_destruct;
- (id)initWithVendorID:(id)a0 productId:(id)a1 softwareVersion:(id)a2 protocolsSupported:(id)a3 hardwareVersion:(id)a4 location:(id)a5 requestorCanConsent:(id)a6 metadataForProvider:(id)a7;

@end
