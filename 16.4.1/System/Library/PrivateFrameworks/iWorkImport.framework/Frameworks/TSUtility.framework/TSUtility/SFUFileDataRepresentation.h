@class NSString, SFUCryptoKey;
@protocol SFUInputStream;

@interface SFUFileDataRepresentation : SFUDataRepresentation {
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned int mFileType;
    BOOL mHasFileAttributes;
    long long mPlaintextDataLength;
    SFUCryptoKey *mCryptoKey;
    id<SFUInputStream> mInputStream;
    BOOL mDeleteFileWhenDone;
}

- (unsigned int)fileType;
- (BOOL)isReadable;
- (BOOL)isEncrypted;
- (id)initWithPath:(id)a0;
- (id)path;
- (void)setFileType:(unsigned int)a0;
- (long long)dataLength;
- (void)dealloc;
- (id)description;
- (id)inputStream;
- (long long)encodedLength;
- (void)deleteFileWhenDone;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)initWithCopyOfData:(id)a0 path:(id)a1;
- (id)initWithCopyOfData:(id)a0 path:(id)a1 cryptoKey:(id)a2;
- (id)initWithInputStream:(id)a0 cryptoKey:(id)a1 dataLength:(long long)a2;
- (id)initWithPath:(id)a0 cryptoKey:(id)a1 dataLength:(long long)a2;
- (id)initWithPath:(id)a0 sharedFileDescriptor:(int)a1;
- (id)initWithPath:(id)a0 sharedFileDescriptor:(int)a1 cryptoKey:(id)a2 dataLength:(long long)a3;
- (BOOL)isCryptoKeyIdenticalToKey:(id)a0;
- (void)readFileAttributes;

@end
