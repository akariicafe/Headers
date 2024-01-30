@class NSString, NSData;

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {
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
- (id)initWithData:(id)a0;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)a0;
- (long long)offset;
- (void)dealloc;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (unsigned long long)readToOwnBuffer:(const char **)a0 size:(unsigned long long)a1;
- (id)initWithData:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2;
- (BOOL)seekWithinBufferToOffset:(long long)a0;

@end
