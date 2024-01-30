@class ASDPurchaseRequestOptions;

@interface ASDPurchaseRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurchaseRequestOptions *options;

+ (long long)requestType;

- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithOptions:(id)a0;

@end
