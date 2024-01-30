@interface ICURLResponseHandler : NSObject

- (void)processInitialResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)processCompletedResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
