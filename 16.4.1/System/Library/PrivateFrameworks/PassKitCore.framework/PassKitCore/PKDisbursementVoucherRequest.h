@class NSString;

@interface PKDisbursementVoucherRequest : PKPeerPaymentWebServiceRequest

@property (nonatomic) unsigned long long disbursementSource;
@property (nonatomic) unsigned long long disbursementTarget;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithDisbursementSource:(unsigned long long)a0 disbursementTarget:(unsigned long long)a1 teamIdentifier:(id)a2 bundleIdentifier:(id)a3;

@end
