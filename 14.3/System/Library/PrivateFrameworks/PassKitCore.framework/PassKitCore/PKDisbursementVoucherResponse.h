@class NSString, NSURL;

@interface PKDisbursementVoucherResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *voucher;
@property (readonly, copy, nonatomic) NSURL *redemptionURL;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
