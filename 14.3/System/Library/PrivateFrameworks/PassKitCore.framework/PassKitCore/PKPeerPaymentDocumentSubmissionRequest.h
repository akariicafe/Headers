@class NSData, NSString, NSArray;

@interface PKPeerPaymentDocumentSubmissionRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSData *frontImageData;
@property (copy, nonatomic) NSData *backImageData;
@property (copy, nonatomic) NSString *documentCountryCode;
@property (nonatomic) unsigned long long documentType;
@property (copy, nonatomic) NSArray *certificates;
@property (nonatomic) BOOL devSigned;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
