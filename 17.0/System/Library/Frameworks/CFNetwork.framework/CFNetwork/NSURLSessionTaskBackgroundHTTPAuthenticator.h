@interface NSURLSessionTaskBackgroundHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator

- (void)dealloc;
- (void)getAuthenticationHeadersForTask:(id)a0 task:(id)a1 response:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithStatusCodes:(id)a0;

@end
