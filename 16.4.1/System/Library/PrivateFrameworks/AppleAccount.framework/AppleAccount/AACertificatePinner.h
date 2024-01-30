@class NSString;

@interface AACertificatePinner : NSObject <NSURLConnectionDelegate, NSURLSessionDelegate>

@property (class, readonly) AACertificatePinner *sharedPinner;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSetupServiceHost:(id)a0;
+ (BOOL)isValidCertificateTrust:(struct __SecTrust { } *)a0;

- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;

@end
