@class NSArray, NSString, NSURL, PKContactInformation;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSURL *passURL;
@property (readonly, copy, nonatomic) NSArray *moreInfoURLs;
@property (readonly, nonatomic) BOOL willProvisionWithAuthenticationDisabled;
@property (readonly, nonatomic) PKContactInformation *idmsContactInformation;
@property (readonly, copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
