@class NSString;

@interface OISFUFileInputStream : NSObject <SFUInputStream> {
    int mFd;
    BOOL mIsCachingDisabled;
    long long mStartOffset;
    long long mCurrentOffset;
    long long mEndOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)seekToOffset:(long long)a0;
- (void)dealloc;
- (long long)offset;
- (BOOL)canSeek;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (id)initWithPath:(id)a0 offset:(long long)a1;
- (id)initWithFileDescriptor:(int)a0 offset:(long long)a1 length:(long long)a2;
- (id)initWithPath:(id)a0 offset:(long long)a1 length:(long long)a2;

@end
