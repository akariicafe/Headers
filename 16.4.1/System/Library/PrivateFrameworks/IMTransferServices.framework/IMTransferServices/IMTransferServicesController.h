@interface IMTransferServicesController : NSObject

+ (id)sharedInstance;

- (void)getNicknameWithRecordID:(id)a0 decryptionKey:(id)a1 completionBlock:(id /* block */)a2;
- (void)deleteAllPersonalNicknamesWithCompletion:(id /* block */)a0;
- (void)receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 decryptionKey:(id)a6 fileSize:(unsigned long long)a7 progressBlock:(id /* block */)a8 completionBlock:(id /* block */)a9;
- (void)setPersonalNickname:(id)a0 oldRecordID:(id)a1 completionBlock:(id /* block */)a2;
- (void)_receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 sourceAppID:(id)a5 signature:(id)a6 decryptionKey:(id)a7 retries:(int)a8 fileSize:(unsigned long long)a9 progressBlock:(id /* block */)a10 completionBlock:(id /* block */)a11;
- (void)_sendFilePath:(id)a0 topic:(id)a1 userInfo:(id)a2 transferID:(id)a3 sourceAppID:(id)a4 encryptFile:(BOOL)a5 retries:(int)a6 progressBlock:(id /* block */)a7 completionBlock:(id /* block */)a8;
- (void)cancelSendTransferID:(id)a0;
- (void)preWarmMMCSForOwnerID:(id)a0;
- (void)receiveFileTransfer:(id)a0 topic:(id)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 sourceAppID:(id)a5 signature:(id)a6 decryptionKey:(id)a7 fileSize:(unsigned long long)a8 progressBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (void)sendFilePath:(id)a0 topic:(id)a1 transferID:(id)a2 encryptFile:(BOOL)a3 progressBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)sendFilePath:(id)a0 topic:(id)a1 userInfo:(id)a2 transferID:(id)a3 encryptFile:(BOOL)a4 progressBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)sendFilePath:(id)a0 topic:(id)a1 userInfo:(id)a2 transferID:(id)a3 sourceAppID:(id)a4 encryptFile:(BOOL)a5 progressBlock:(id /* block */)a6 completionBlock:(id /* block */)a7;

@end
