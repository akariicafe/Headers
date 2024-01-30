@interface INUIAppIntentDeliverer : INAppIntentDeliverer

- (void)deliverIntentForwardingActionWithResponseHandler:(id /* block */)a0;
- (void)deliverIntent:(id)a0 reply:(id /* block */)a1;

@end
