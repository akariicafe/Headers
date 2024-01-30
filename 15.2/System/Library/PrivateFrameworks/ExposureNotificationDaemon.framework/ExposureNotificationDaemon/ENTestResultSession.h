@class NSUUID, ENTestResultNetworkRequest, NSString, NSURL, NSArray, ENRegion, NSURLSession, NSObject, NSMutableArray, ENTestResultPersistentSession;
@protocol OS_dispatch_queue;

@interface ENTestResultSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    ENTestResultNetworkRequest *_networkRequest;
    ENTestResultPersistentSession *_persistentSession;
    NSURLSession *_URLSession;
    NSMutableArray *_verificationCompletions;
}

@property (readonly, copy, nonatomic) ENRegion *region;
@property (readonly, copy, nonatomic) NSString *verificationCode;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *agencyAPIKey;
@property (readonly, copy, nonatomic) NSURL *certificateURL;
@property (readonly, copy, nonatomic) NSString *healthAuthorityID;
@property (readonly, copy, nonatomic) NSString *nonce;
@property (readonly, copy, nonatomic) NSURL *verificationURL;
@property (readonly, copy, nonatomic) NSURL *uploadURL;
@property (readonly, copy, nonatomic) NSArray *acceptedReportTypes;
@property (nonatomic) unsigned long long maxRetryTime;

+ (id)sessionWithVerificationCode:(id)a0 configuration:(id)a1 maxRetryTime:(unsigned long long)a2 nonce:(id)a3 URLSession:(id)a4 queue:(id)a5 error:(id *)a6;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)verifyCodeWithCompletionHandler:(id /* block */)a0;
- (id)getMetadataAndReturnError:(id *)a0;
- (id)getUploadingTemporaryExposureKeys;
- (void)uploadTemporaryExposureKeys:(id)a0 revisionToken:(id)a1 userMetadata:(id)a2 completionHandler:(id /* block */)a3;
- (id)_initWithAgencyAPIKey:(id)a0 certificateURL:(id)a1 acceptedReportTypes:(id)a2 healthAuthorityID:(id)a3 maxRetryTime:(unsigned long long)a4 nonce:(id)a5 queue:(id)a6 region:(id)a7 uploadURL:(id)a8 URLSession:(id)a9 verificationCode:(id)a10 verifyURL:(id)a11;
- (void)_flushVerificationCompletionsWithError:(id)a0;
- (BOOL)_checkInvalidatedAndReturnError:(id *)a0;
- (BOOL)_performVerificationRequestWithError:(id *)a0;
- (void)_performUploadRequestWithTemporaryExposureKeys:(id)a0 revisionToken:(id)a1 certificate:(id)a2 HMACKey:(id)a3 userMetadata:(id)a4 completionHandler:(id /* block */)a5;
- (void)_performCertificateRequestWithToken:(id)a0 temporaryExposureKeys:(id)a1 completionHandler:(id /* block */)a2;

@end
