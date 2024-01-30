@interface NSURLSessionTaskBackgroundHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator

- (id)initWithStatusCodes:(id)a0;
- (void)getAuthenticationHeadersForTask:(id)a0 task:(id)a1 response:(id)a2 completionHandler:(id /* block */)a3;
- (void)dealloc;

@end
