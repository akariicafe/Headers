@protocol SFUBufferedInputStream;

@interface SFUZipRecordInputStream : NSObject {
    id<SFUBufferedInputStream> mInput;
    const char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}

- (id)initWithDataRepresentation:(id)a0;
- (void)dealloc;
- (const char *)dataAtOffset:(long long)a0 size:(unsigned long long)a1 end:(long long)a2;

@end
