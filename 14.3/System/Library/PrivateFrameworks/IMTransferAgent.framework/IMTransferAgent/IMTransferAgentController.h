@class MMCSController;

@interface IMTransferAgentController : NSObject

@property (retain, nonatomic) MMCSController *controller;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_isWhiteListedURL:(id)a0;
- (void)cancelSendTransferID:(id)a0;
- (void)sendFilePath:(id)a0 topic:(id)a1 transferID:(id)a2 sourceAppID:(id)a3 userInfo:(id)a4 progressBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (BOOL)_shouldRetryUploadGivenMMCSError:(id)a0 retryAttemptCount:(unsigned long long)a1;
- (void)_sendFilePath:(id)a0 topic:(id)a1 transferID:(id)a2 sourceAppID:(id)a3 retryAttemptCount:(unsigned long long)a4 userInfo:(id)a5 progressBlock:(id /* block */)a6 completionBlock:(id /* block */)a7;
- (id)_defaultMMCSWhiteList;
- (void)_receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 allowReauthorize:(BOOL)a6 fileSize:(unsigned long long)a7 sourceAppID:(id)a8 progressBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (void)receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 fileSize:(unsigned long long)a6 sourceAppID:(id)a7 progressBlock:(id /* block */)a8 completionBlock:(id /* block */)a9;

@end
