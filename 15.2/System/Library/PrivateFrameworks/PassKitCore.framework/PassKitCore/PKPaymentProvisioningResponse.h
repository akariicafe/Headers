@class NSArray, NSString, NSURL, PKContactInformation;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSURL *passURL;
@property (readonly, copy, nonatomic) NSArray *moreInfoURLs;
@property (readonly, nonatomic) BOOL willProvisionWithAuthenticationDisabled;
@property (readonly, nonatomic) PKContactInformation *idmsContactInformation;
@property (readonly, copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
