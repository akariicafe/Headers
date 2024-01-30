@class NSString, NSURLSession;
@protocol CFScriptDownloadDelegate;

@interface CFScriptDownloadManager : NSObject <NSURLSessionDelegate>

@property (readonly) id<CFScriptDownloadDelegate> delegate;
@property (readonly) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isValidURL:(id)a0;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDelegate:(id)a0;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (BOOL)_verifyScriptData:(id)a0 hmac:(id)a1 hmacKey:(id)a2 iv:(id)a3;
- (id)_hmacVerificationEventContextWithEncryptionParameters:(id)a0 script:(id)a1 scriptData:(id)a2;
- (id)_decryptedDataForScriptEncryptedData:(id)a0 forScript:(id)a1;
- (BOOL)_isValidDecryptedData:(id)a0 forScript:(id)a1;
- (id)_scriptStringFromData:(id)a0;
- (void)_saveDecryptedData:(id)a0 script:(id)a1;
- (id)_filePathForScriptArchiveIdentifier:(id)a0;
- (void)invalidateTasks;
- (void)downloadScript:(id)a0 onDispatchGroup:(id)a1 completion:(id /* block */)a2;

@end
