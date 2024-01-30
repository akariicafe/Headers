@class NSObject, NSString, NSURLSession, NSURL, ENTestResultNetworkRequest, ENRegion;
@protocol OS_dispatch_queue;

@interface ENChaffTestResultSession : NSObject {
    id /* block */ _completion;
    ENTestResultNetworkRequest *_networkRequest;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    NSURLSession *_URLSession;
}

@property (readonly, copy, nonatomic) ENRegion *region;
@property (readonly, copy, nonatomic) NSString *agencyAPIKey;
@property (readonly, copy, nonatomic) NSURL *certificateURL;
@property (readonly, copy, nonatomic) NSURL *verificationURL;
@property (readonly, copy, nonatomic) NSURL *uploadURL;

+ (id)sessionWithConfiguration:(id)a0 URLSession:(id)a1 queue:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_callCompletionIfNecessaryWithError:(id)a0;
- (id)_initWithAgencyAPIKey:(id)a0 certificateURL:(id)a1 queue:(id)a2 region:(id)a3 uploadURL:(id)a4 URLSession:(id)a5 verifyURL:(id)a6;
- (void)_sendCertificateChaffRequest;
- (void)_sendChaffRequestWithURL:(id)a0 useAPIKey:(BOOL)a1 successHandler:(id /* block */)a2;
- (void)_sendUploadChaffRequest;
- (void)_sendVerificationChaffRequest;
- (void)sendChaffMessagesWithCompletion:(id /* block */)a0;

@end
