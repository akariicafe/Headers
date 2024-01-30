@class NSString, NSArray, NSURL, PKPaymentRemoteCredential;

@interface PKAccountWebServicePassDetailsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSString *provisioningIdentifier;
@property (readonly, nonatomic) long long cardType;
@property (nonatomic) long long status;
@property (readonly, copy, nonatomic) NSURL *passURL;
@property (readonly, copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *passSerialNumber;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (readonly, nonatomic) NSArray *postProvisioningContent;
@property (retain, nonatomic) PKPaymentRemoteCredential *remoteCredential;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
