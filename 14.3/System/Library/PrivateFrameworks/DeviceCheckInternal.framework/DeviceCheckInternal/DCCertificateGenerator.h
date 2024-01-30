@class NSData, DCContext;

@interface DCCertificateGenerator : NSObject {
    NSData *_publicKey;
    DCContext *_context;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)a0 publicKey:(id)a1;
- (void)generateEncryptedCertificateChainWithCompletion:(id /* block */)a0;
- (id)_encryptData:(id)a0 serverSyncedDate:(id)a1 error:(id *)a2;
- (void)_generateCertificateChainWithCompletion:(id /* block */)a0;
- (unsigned int)generateTTL;
- (BOOL)_isNSDate:(id)a0;
- (int)keybagHandle;

@end
