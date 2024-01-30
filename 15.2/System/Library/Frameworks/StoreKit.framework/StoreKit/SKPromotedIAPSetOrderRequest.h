@class NSArray, NSString;

@interface SKPromotedIAPSetOrderRequest : SKRequest

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSArray *order;
@property (copy, nonatomic) NSString *bundleId;

- (void)_start;
- (void).cxx_destruct;
- (void)_handleReply:(id)a0;
- (id)initWithOrder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithOrder:(id)a0 bundleId:(id)a1 completionHandler:(id /* block */)a2;

@end
