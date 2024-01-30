@class NSString, NSDecimalNumber, NSURL;

@interface PKAccountWebServiceInstallmentBindRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSDecimalNumber *bindingAmount;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (retain, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
