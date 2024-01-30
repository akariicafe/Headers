@class NSData, NSString, NSArray, NSURLSession, NSURL, NSError, NSObject, NSMutableData;
@protocol OS_dispatch_semaphore;

@interface MCHTTPTransaction : NSObject <NSURLSessionDataDelegate> {
    struct __SecIdentity { } *_identity;
    NSURL *_currentURL;
    BOOL _rememberData;
    NSURLSession *_session;
    NSObject<OS_dispatch_semaphore> *_doneSema;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *method;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSArray *pinnedSecCertificateRefs;
@property (nonatomic) BOOL pinningRevocationCheckRequired;
@property (retain, nonatomic) NSString *CMSSignatureHeaderName;
@property (readonly, retain, nonatomic) NSMutableData *responseData;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) NSURL *permanentlyRedirectedURL;
@property (readonly, nonatomic) long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transactionWithURL:(id)a0 method:(id)a1;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)setIdentity:(struct __SecIdentity { } *)a0;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (struct __SecIdentity { } *)copyIdentity;
- (void)_beginTransaction;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (BOOL)_shouldAllowTrust:(struct __SecTrust { } *)a0 forHost:(id)a1;
- (BOOL)_shouldAllowTrustWithPinning:(struct __SecTrust { } *)a0 forHost:(id)a1;
- (id)initWithURL:(id)a0 method:(id)a1;
- (void)performCompletionBlock:(id /* block */)a0;
- (void)performSynchronously;

@end
