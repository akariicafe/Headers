@class NSString;

@interface PKPaymentCompleteSessionResponse : PKPaymentRewrapResponseBase

@property (readonly, copy, nonatomic) NSString *retryNonce;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
