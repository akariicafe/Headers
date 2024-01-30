@class NSData;

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation {
    NSData *mData;
}

- (long long)dataLength;
- (id)data;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (BOOL)isReadable;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithDataNoCopy:(id)a0;
- (id)inputStream;
- (id)bufferedInputStream;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (unsigned long long)readIntoData:(id)a0;

@end
