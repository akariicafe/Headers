@interface IMURLProtocolHandler : AMSURLProtocolHandler

@property BOOL followsRedirects;

- (id)handleCompletionWithTask:(id)a0 metrics:(id)a1 decodedObject:(id)a2;

@end
