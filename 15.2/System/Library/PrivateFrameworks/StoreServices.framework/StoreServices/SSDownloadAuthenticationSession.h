@class NSURLAuthenticationChallenge;

@interface SSDownloadAuthenticationSession : SSDownloadSession

@property (readonly) NSURLAuthenticationChallenge *authenticationChallenge;

- (void)_finishWithType:(int)a0 credential:(id)a1;

@end
