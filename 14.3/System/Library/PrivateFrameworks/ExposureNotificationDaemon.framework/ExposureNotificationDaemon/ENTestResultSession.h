@class NSUUID, ENTestResultNetworkRequest, NSString, NSURL, ENRegion, NSURLSession, NSObject, NSMutableArray, ENTestResultPersistentSession;
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
@property (readonly, copy, nonatomic) NSURL *verificationURL;
@property (readonly, copy, nonatomic) NSURL *uploadURL;

+ (id)sessionWithVerificationCode:(id)a0 configuration:(id)a1 URLSession:(id)a2 queue:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
- (void)verifyCodeWithCompletionHandler:(id /* block */)a0;
- (id)getMetadataAndReturnError:(id *)a0;
- (void)uploadTemporaryExposureKeys:(id)a0 revisionToken:(id)a1 userMetadata:(id)a2 completionHandler:(id /* block */)a3;
- (id)_initWithAgencyAPIKey:(id)a0 certificateURL:(id)a1 healthAuthorityID:(id)a2 queue:(id)a3 region:(id)a4 uploadURL:(id)a5 URLSession:(id)a6 verificationCode:(id)a7 verifyURL:(id)a8;
- (void)_flushVerificationCompletionsWithError:(id)a0;
- (BOOL)_checkInvalidatedAndReturnError:(id *)a0;
- (BOOL)_performVerificationRequestWithError:(id *)a0;
- (void)_performUploadRequestWithTemporaryExposureKeys:(id)a0 revisionToken:(id)a1 certificate:(id)a2 HMACKey:(id)a3 userMetadata:(id)a4 completionHandler:(id /* block */)a5;
- (void)_performCertificateRequestWithToken:(id)a0 temporaryExposureKeys:(id)a1 completionHandler:(id /* block */)a2;

@end
