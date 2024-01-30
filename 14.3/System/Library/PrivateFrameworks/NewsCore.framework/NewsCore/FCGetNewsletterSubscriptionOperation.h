@class FCNewsletterEndpointConnection;

@interface FCGetNewsletterSubscriptionOperation : FCOperation

@property (retain, nonatomic) FCNewsletterEndpointConnection *endpointConnection;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithEndpointConnection:(id)a0 completion:(id /* block */)a1;
- (void)performOperation;

@end
