@class NSString;

@interface NPTunnelNSURLSessionDelegate : NSObject <NSURLSessionDelegate>

@property (retain) NSString *validationHostname;
@property BOOL enableExtendedValidation;
@property BOOL ignoreInvalidCerts;
@property (retain) NSString *leafOID;
@property BOOL revocationFailClosed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;

@end
