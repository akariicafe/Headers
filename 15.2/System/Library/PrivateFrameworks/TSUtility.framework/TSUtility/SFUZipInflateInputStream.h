@class NSString;
@protocol SFUBufferedInputStream;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } mStream;
    long long mOffset;
    id<SFUBufferedInputStream> mInput;
    char *mOutBuffer;
    unsigned long long mOutBufferSize;
    BOOL mReachedEnd;
    BOOL mIsFromZip;
    unsigned long long mCalculatedCrc;
    unsigned long long mCheckCrc;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (id)initWithInput:(id)a0;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)a0;
- (long long)offset;
- (void)dealloc;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (unsigned long long)readToOwnBuffer:(const char **)a0 size:(unsigned long long)a1;
- (void)setupInflateStream;
- (id)initWithOffset:(long long)a0 end:(long long)a1 uncompressedSize:(unsigned long long)a2 crc:(unsigned long long)a3 dataRepresentation:(id)a4;
- (long long)totalCompressedBytesConsumed;

@end
