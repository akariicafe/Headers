@class AMSMescalSession;
@protocol AMSBagProtocol;

@interface AMSMescalAccountPrimeSession : NSObject

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSMescalSession *session;

- (id)initWithBag:(id)a0;
- (id)signData:(id)a0;
- (void).cxx_destruct;
- (id)primeSignatureForData:(id)a0;
- (id)verifyPrimeSignature:(id)a0;

@end
