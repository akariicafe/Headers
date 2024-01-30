@class NSString, NSURL, NSError;

@interface PKAccountWebServicePayLaterFinancingOptionCancellationRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *optionIdentifier;
@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSError *error;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
