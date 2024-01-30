@class ASDPurchaseRequestOptions;

@interface ASDPurchaseRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurchaseRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
