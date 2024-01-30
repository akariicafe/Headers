@class NSString;
@protocol SFUOutputStream;

@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream> {
    id<SFUOutputStream> mOutputStream;
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } mDeflateStream;
    char *mOutBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOutputStream:(id)a0;
- (long long)offset;
- (void)dealloc;
- (void)close;
- (BOOL)canSeek;
- (id)inputStream;
- (id)closeLocalStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
