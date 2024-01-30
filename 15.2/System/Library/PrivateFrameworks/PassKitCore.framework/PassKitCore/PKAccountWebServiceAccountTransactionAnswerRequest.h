@class NSString, NSURL, NSDictionary;

@interface PKAccountWebServiceAccountTransactionAnswerRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSDictionary *answers;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
