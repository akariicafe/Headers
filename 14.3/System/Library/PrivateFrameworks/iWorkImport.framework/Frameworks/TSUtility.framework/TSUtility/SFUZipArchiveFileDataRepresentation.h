@class NSString, SFUFileDataRepresentation;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    SFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)dataLength;
- (id)initWithPath:(id)a0;
- (id)path;
- (void)dealloc;
- (BOOL)isReadable;
- (BOOL)isEncrypted;
- (id)inputStream;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)bufferedInputStreamWithOffset:(long long)a0 length:(long long)a1;
- (id)inputStreamWithOffset:(long long)a0 length:(long long)a1;

@end
