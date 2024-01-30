@class OCCDecryptor;

@interface OCDEncryptedReader : OCDReader

@property (readonly, nonatomic) OCCDecryptor *decryptor;

- (void).cxx_destruct;
- (BOOL)retainDecryptorWithErrorCode:(int *)a0;
- (void)restartReaderToUseDecryptedDocument;
- (void)useUnencryptedDocument;
- (id)defaultPassphrase;

@end
