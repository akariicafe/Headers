@class NSString, NSURL;

@interface PKAccountWebServicePayLaterContentRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long type;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (id)contextString;
- (void).cxx_destruct;
- (id)bodyDictionary;

@end
