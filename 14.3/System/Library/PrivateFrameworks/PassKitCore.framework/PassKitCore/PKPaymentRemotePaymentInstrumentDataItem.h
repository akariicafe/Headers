@class PKRemotePaymentInstrument, PKRemoteDevice, CNContact, PKPaymentApplication;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKRemoteDevice *remoteDevice;
@property (readonly, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) BOOL requiresBillingAddress;
@property (readonly, nonatomic) CNContact *billingAddress;

+ (long long)dataType;

- (id)errors;
- (BOOL)isValidWithError:(id *)a0;
- (unsigned long long)peerPaymentAccountState;
- (id)paymentContactFormatErrors;
- (id)peerPaymentAccountBalance;
- (BOOL)hasAssociatedPeerPaymentAccount;

@end
