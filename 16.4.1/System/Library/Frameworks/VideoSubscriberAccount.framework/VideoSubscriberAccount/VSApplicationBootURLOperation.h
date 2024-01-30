@class NSString, NSDictionary, NSURL, VSFailable, VSPreferences;

@interface VSApplicationBootURLOperation : VSAsyncOperation <NSURLSessionDelegate>

@property (retain, nonatomic) VSPreferences *preferences;
@property (nonatomic, getter=isForTesting) BOOL test;
@property (nonatomic) BOOL skipSystemTrustVerification;
@property (retain, nonatomic) NSDictionary *trustInfo;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic, getter=isDeveloper) BOOL developer;
@property (retain, nonatomic) VSFailable *urlOrError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executionDidBegin;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (id)generateFilePathForURL:(id)a0;
- (id)initWithBootURL:(id)a0 isDeveloper:(BOOL)a1;
- (BOOL)validateTrust:(struct __SecTrust { } *)a0;
- (BOOL)verifyCertificateIsSystemTrustedWithTrust:(struct __SecTrust { } *)a0;

@end
