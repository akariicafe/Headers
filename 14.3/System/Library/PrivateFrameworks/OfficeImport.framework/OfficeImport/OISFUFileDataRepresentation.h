@class NSString, OISFUCryptoKey;
@protocol SFUInputStream;

@interface OISFUFileDataRepresentation : OISFUDataRepresentation {
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned int mFileType;
    BOOL mHasFileAttributes;
    long long mPlaintextDataLength;
    OISFUCryptoKey *mCryptoKey;
    id<SFUInputStream> mInputStream;
    BOOL mDeleteFileWhenDone;
}

- (long long)dataLength;
- (id)initWithPath:(id)a0;
- (id)path;
- (void)dealloc;
- (void)setFileType:(unsigned int)a0;
- (BOOL)isReadable;
- (BOOL)isEncrypted;
- (id)description;
- (unsigned int)fileType;
- (long long)encodedLength;
- (id)inputStream;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)initWithPath:(id)a0 sharedFileDescriptor:(int)a1 cryptoKey:(id)a2 dataLength:(long long)a3;
- (id)initWithCopyOfData:(id)a0 path:(id)a1 cryptoKey:(id)a2;
- (BOOL)isCryptoKeyIdenticalToKey:(id)a0;
- (id)initWithPath:(id)a0 cryptoKey:(id)a1 dataLength:(long long)a2;
- (void)readFileAttributes;
- (id)initWithPath:(id)a0 sharedFileDescriptor:(int)a1;
- (id)initWithCopyOfData:(id)a0 path:(id)a1;
- (id)initWithInputStream:(id)a0 cryptoKey:(id)a1 dataLength:(long long)a2;
- (void)deleteFileWhenDone;

@end
