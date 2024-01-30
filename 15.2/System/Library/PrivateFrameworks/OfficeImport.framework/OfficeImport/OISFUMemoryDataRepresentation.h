@class NSData;

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation {
    NSData *mData;
}

- (BOOL)isReadable;
- (id)inputStream;
- (id)initWithData:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithDataNoCopy:(id)a0;
- (void)dealloc;
- (id)data;
- (long long)dataLength;
- (id)bufferedInputStream;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (unsigned long long)readIntoData:(id)a0;

@end
