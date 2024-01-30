@class FCNewsletterEndpointConnection;

@interface FCGetNewsletterSubscriptionOperation : FCOperation

@property (retain, nonatomic) FCNewsletterEndpointConnection *endpointConnection;
@property (copy, nonatomic) id /* block */ completion;

- (void)performOperation;
- (void).cxx_destruct;
- (id)initWithEndpointConnection:(id)a0 completion:(id /* block */)a1;

@end
