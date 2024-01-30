@interface HealthRecordsDaemon.URLSessionCertVerificationDelegate : NSObject <NSURLSessionDelegate>

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;

@end
