@interface IMTransferEncryptionController : NSObject

+ (id)sharedInstance;

- (void)encryptURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)decryptURL:(id)a0 key:(id)a1 outputFileName:(id)a2 completionBlock:(id /* block */)a3;

@end
