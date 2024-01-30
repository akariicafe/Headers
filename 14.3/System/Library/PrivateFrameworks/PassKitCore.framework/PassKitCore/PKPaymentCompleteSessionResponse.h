@class NSString;

@interface PKPaymentCompleteSessionResponse : PKPaymentRewrapResponseBase

@property (readonly, copy, nonatomic) NSString *retryNonce;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
