@interface SFUCryptor : NSObject {
    int mOperation;
    struct _CCCryptor { } *mCryptor;
    unsigned long long mBlockSize;
    BOOL mFinished;
    char *mDecryptionInputBuffer;
    char *mOutputBuffer;
    char *mOutputBufferPos;
    unsigned long long mOutputBufferAvailable;
}

- (void)dealloc;
- (id)initWithKey:(id)a0 operation:(int)a1 iv:(const char *)a2 ivLength:(unsigned long long)a3 usePKCS7Padding:(BOOL)a4;
- (BOOL)cryptDataFromBuffer:(const char *)a0 length:(unsigned long long)a1 toStream:(id)a2 finished:(BOOL)a3 crc32:(unsigned int *)a4 error:(id *)a5;
- (id)initWithKey:(id)a0 operation:(int)a1 iv:(const char *)a2 ivLength:(unsigned long long)a3;
- (BOOL)cryptDataFromBuffer:(const char *)a0 length:(unsigned long long)a1 toStream:(id)a2 finished:(BOOL)a3 error:(id *)a4;
- (BOOL)cryptDataFromStream:(id)a0 toBuffer:(char *)a1 length:(unsigned long long)a2 bytesRead:(unsigned long long *)a3 error:(id *)a4;

@end
