@interface TSPFileManager : NSObject

+ (BOOL)copyDataFromReadChannel:(id)a0 decryptionInfo:(id)a1 size:(unsigned long long)a2 toWriteChannel:(id)a3 encryptionInfo:(id)a4 encodedLength:(unsigned long long *)a5 error:(id *)a6;
+ (void)copyDataFromReadChannel:(id)a0 decryptionInfo:(id)a1 size:(unsigned long long)a2 toWriteChannel:(id)a3 encryptionInfo:(id)a4 synchronous:(BOOL)a5 completion:(id /* block */)a6;
+ (void)copyDataFromReadChannel:(id)a0 decryptionInfo:(id)a1 toWriteChannel:(id)a2 encryptionInfo:(id)a3 completion:(id /* block */)a4;
+ (void)copyDataFromReadChannel:(id)a0 size:(unsigned long long)a1 toWriteChannel:(id)a2 synchronous:(BOOL)a3 completion:(id /* block */)a4;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 sourcePath:(id)a2 targetPath:(id)a3;
+ (id)ioCompletionQueue;
+ (BOOL)linkOrCloneItemAtURL:(id)a0 toURL:(id)a1 canLink:(BOOL)a2 canClone:(BOOL)a3 error:(id *)a4;
+ (BOOL)linkOrCloneItemAtURL:(id)a0 toURL:(id)a1 canLink:(BOOL)a2 error:(id *)a3;
+ (BOOL)linkOrCopyItemAtURL:(id)a0 decryptionInfo:(id)a1 toURL:(id)a2 encryptionInfo:(id)a3 canLink:(BOOL)a4 encodedLength:(unsigned long long *)a5 error:(id *)a6;
+ (void)transcodeReadChannel:(id)a0 decryptionInfo:(id)a1 size:(unsigned long long)a2 toWriteChannel:(id)a3 encryptionInfo:(id)a4 synchronous:(BOOL)a5 completion:(id /* block */)a6;

@end
