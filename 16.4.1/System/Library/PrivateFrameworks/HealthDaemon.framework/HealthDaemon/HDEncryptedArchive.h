@interface HDEncryptedArchive : NSObject {
    struct AEAContext_impl { } *_context;
    struct AAByteStream_impl { } *_fileStream;
    struct AAByteStream_impl { } *_byteStream;
    long long _mode;
}

+ (id)archiveForDecryptionWithFileHandle:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)archiveForEncryptionWithFileHandle:(id)a0 key:(id)a1 error:(id *)a2;
+ (BOOL)encryptContentsOfFileHandle:(id)a0 to:(id)a1 key:(id)a2 error:(id *)a3;
+ (id)randomSymmetricKeyWithError:(id *)a0;

- (BOOL)writeData:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)close;
- (id)initWithContext:(struct AEAContext_impl { } *)a0 fileStream:(struct AAByteStream_impl { } *)a1 byteStream:(struct AAByteStream_impl { } *)a2 mode:(long long)a3;
- (id)readDataOfLength:(long long)a0 offset:(long long)a1 error:(id *)a2;

@end
