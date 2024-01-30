@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {
    const void *mDataBytes;
}

@property (retain, nonatomic) OCPZipPackage *zipPackage;

- (id)read;
- (BOOL)start;
- (void).cxx_destruct;
- (BOOL)retainDecryptorWithErrorCode:(int *)a0;
- (BOOL)isBinaryReader;
- (BOOL)verifyFileFormat;
- (void)restartReaderToUseDecryptedDocument;

@end
