@class ISHashError, NSString, NSArray;

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying> {
    int _fileDescriptor;
    struct CC_MD5state_st { unsigned int A; unsigned int B; unsigned int C; unsigned int D; unsigned int Nl; unsigned int Nh; unsigned int data[16]; int num; } _md5Context;
}

@property (copy) ISHashError *lastHashError;
@property long long streamedBytes;
@property long long validatedBytes;
@property (retain) NSString *localFilePath;
@property BOOL shouldResumeFromLocalBytes;
@property (retain) NSArray *hashes;
@property long long numberOfBytesToHash;

- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (void)setup;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)closeStream;
- (void)dealloc;
- (BOOL)isStream;
- (void)resetStream;
- (BOOL)canStreamContentLength:(long long)a0 error:(id *)a1;
- (void)_closeFile;
- (BOOL)_writeDataWithoutHashing:(id)a0 returningError:(id *)a1;
- (BOOL)_writeDataWithHashing:(id)a0 returningError:(id *)a1;
- (BOOL)_openFile;
- (BOOL)_truncateToSize:(long long)a0;
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)a0;
- (BOOL)_checkHashForByteCount:(long long)a0;

@end
