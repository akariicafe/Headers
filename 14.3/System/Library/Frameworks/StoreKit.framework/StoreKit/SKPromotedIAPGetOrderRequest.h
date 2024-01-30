@class NSString;

@interface SKPromotedIAPGetOrderRequest : SKRequest

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *bundleId;

- (void)_start;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_handleReply:(id)a0;
- (id)initWithBundleId:(id)a0 completionHandler:(id /* block */)a1;

@end
