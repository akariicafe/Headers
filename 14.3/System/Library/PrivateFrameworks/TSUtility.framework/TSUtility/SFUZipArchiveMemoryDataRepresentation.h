@class NSString, NSData;

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    NSData *mData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)dataLength;
- (id)data;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (BOOL)isReadable;
- (id)inputStream;
- (id)bufferedInputStream;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (id)bufferedInputStreamWithOffset:(long long)a0 length:(long long)a1;
- (id)inputStreamWithOffset:(long long)a0 length:(long long)a1;

@end
