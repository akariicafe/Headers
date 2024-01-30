@class NSString;
@protocol SFUOutputStream;

@interface OISFUZipDeflateOutputStream : NSObject <SFUOutputStream> {
    id<SFUOutputStream> mOutputStream;
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } mDeflateStream;
    char *mOutBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (id)initWithOutputStream:(id)a0;
- (id)inputStream;
- (BOOL)canSeek;
- (long long)offset;
- (void)dealloc;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (BOOL)canCreateInputStream;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
