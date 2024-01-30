@class OCCDecryptor;

@interface OCDEncryptedReader : OCDReader

@property (readonly, nonatomic) OCCDecryptor *decryptor;

- (void).cxx_destruct;
- (id)defaultPassphrase;
- (void)restartReaderToUseDecryptedDocument;
- (BOOL)retainDecryptorWithErrorCode:(int *)a0;
- (void)useUnencryptedDocument;

@end
