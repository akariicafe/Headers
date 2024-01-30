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
- (id)initWithPath:(id)a0;
- (id)inputStream;
- (id)description;
- (BOOL)isEncrypted;
- (void)setFileType:(unsigned int)a0;
- (id)path;
- (void)dealloc;
- (long long)dataLength;
- (long long)encodedLength;
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
