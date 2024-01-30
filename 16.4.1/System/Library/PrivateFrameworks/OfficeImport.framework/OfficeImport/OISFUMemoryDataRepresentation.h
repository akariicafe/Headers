@class NSData;

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation {
    NSData *mData;
}

- (id)initWithData:(id)a0;
- (BOOL)isReadable;
- (long long)dataLength;
- (id)data;
- (void)dealloc;
- (id)inputStream;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithDataNoCopy:(id)a0;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (BOOL)hasSameLocationAs:(id)a0;
- (unsigned long long)readIntoData:(id)a0;

@end
