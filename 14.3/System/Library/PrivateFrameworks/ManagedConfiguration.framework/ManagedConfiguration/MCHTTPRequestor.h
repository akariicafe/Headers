@class NSString, NSArray;

@interface MCHTTPRequestor : NSObject <NSURLSessionDataDelegate>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSArray *anchorCertificates;
@property (retain, nonatomic) id selfReference;
@property (nonatomic) BOOL didFailDueToMissingCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)startWithRequest:(id)a0 username:(id)a1 password:(id)a2 anchorCertificates:(id)a3 completionBlock:(id /* block */)a4;

@end
