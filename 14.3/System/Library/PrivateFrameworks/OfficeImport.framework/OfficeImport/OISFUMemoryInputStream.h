@class NSString, NSData;

@interface OISFUMemoryInputStream : NSObject <OISFUBufferedInputStream> {
    NSData *mData;
    const char *mStart;
    const char *mCurrent;
    const char *mEnd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)seekToOffset:(long long)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (long long)offset;
- (BOOL)canSeek;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (unsigned long long)readToOwnBuffer:(const char **)a0 size:(unsigned long long)a1;
- (id)initWithData:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2;
- (BOOL)seekWithinBufferToOffset:(long long)a0;

@end
