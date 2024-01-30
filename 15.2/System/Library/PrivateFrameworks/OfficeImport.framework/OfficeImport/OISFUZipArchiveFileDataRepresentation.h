@class NSString, OISFUFileDataRepresentation;

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    OISFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReadable;
- (id)initWithPath:(id)a0;
- (id)inputStream;
- (BOOL)isEncrypted;
- (id)path;
- (void)dealloc;
- (long long)dataLength;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)bufferedInputStreamWithOffset:(long long)a0 length:(long long)a1;
- (id)inputStreamWithOffset:(long long)a0 length:(long long)a1;

@end
