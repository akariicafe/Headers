@interface PodcastsUI.UIStoreResponseDelegate : NSObject <NSURLSessionDelegate, AMSURLProtocolDelegate>

- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;

@end
