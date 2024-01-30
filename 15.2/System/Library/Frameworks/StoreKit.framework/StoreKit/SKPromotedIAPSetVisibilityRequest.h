@class NSString;

@interface SKPromotedIAPSetVisibilityRequest : SKRequest

@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long visibility;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *bundleId;

- (void)_start;
- (void).cxx_destruct;
- (void)_handleReply:(id)a0;
- (id)initWithVisibility:(long long)a0 productId:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithVisibility:(long long)a0 productId:(id)a1 bundleId:(id)a2 completionHandler:(id /* block */)a3;

@end
