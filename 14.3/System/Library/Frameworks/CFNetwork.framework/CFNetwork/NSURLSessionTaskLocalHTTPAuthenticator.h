@protocol NSURLSessionAppleIDContext;

@interface NSURLSessionTaskLocalHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator

@property (copy) id<NSURLSessionAppleIDContext> externalAuthenticator;

- (void)getAuthenticationHeadersForTask:(id)a0 task:(id)a1 response:(id)a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (id)initWithSessionAuthenticator:(id)a0 statusCodes:(id)a1;

@end
