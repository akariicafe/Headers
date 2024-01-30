@class NSString, NSURL;

@interface PKDisbursementVoucherResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *voucher;
@property (readonly, copy, nonatomic) NSURL *redemptionURL;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
