@class NSDictionary;
@protocol AMSBagProtocol;

@interface AMSUIMessageGroup : IAMMessageGroup

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSDictionary *clientData;
@property (retain, nonatomic) NSDictionary *clientMetricsOverlay;

- (id)init;
- (id)_viewControllerForType:(long long)a0 account:(id)a1 URL:(id)a2 sidepack:(id)a3 metrics:(id)a4;
- (void).cxx_destruct;
- (void)viewControllerForModalMessagePresentation:(id)a0 completion:(id /* block */)a1;
- (id)initWithBag:(id)a0;

@end
