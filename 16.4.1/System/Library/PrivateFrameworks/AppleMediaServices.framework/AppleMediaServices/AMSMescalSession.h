@class AMSMescalFairPlay, NSData, AMSURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface AMSMescalSession : NSObject {
    NSData *_certificateData;
    AMSURLSession *_urlSession;
    AMSMescalFairPlay *_fairPlayContext;
    long long _mescalType;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)primeSession;
+ (id)defaultSession;
+ (id)sessionWithType:(long long)a0;

- (id)_establishContextWithBag:(id)a0 error:(id *)a1;
- (id)_cachedCertData;
- (BOOL)_verifyEntitlements;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (id)initWithType:(long long)a0;
- (id)_loadCertificateDataWithBag:(id)a0 error:(id *)a1;
- (id)primeSignatureForData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)_cacheCertData:(id)a0 expiration:(double)a1;
- (id)_cachedCertPath;
- (BOOL)_shouldRetryFairPlayForError:(id)a0;
- (void)_resetSession;
- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (BOOL)verifyData:(id)a0 withSignature:(id)a1 bag:(id)a2 error:(id *)a3;
- (id)_postExchangeData:(id)a0 bag:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
