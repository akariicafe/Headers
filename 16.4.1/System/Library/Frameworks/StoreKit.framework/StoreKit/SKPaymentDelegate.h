@class NSString, SKPaymentQueue;

@interface SKPaymentDelegate : NSObject <NSSecureCoding, SKPaymentDelegateProtocol> {
    NSString *_transactionUUID;
    SKPaymentQueue *_paymentQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
