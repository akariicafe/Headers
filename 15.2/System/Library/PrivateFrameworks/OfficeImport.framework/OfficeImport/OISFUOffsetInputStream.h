@class NSString;
@protocol SFUInputStream;

@interface OISFUOffsetInputStream : NSObject <SFUInputStream> {
    id<SFUInputStream> mInputStream;
    long long mInitialOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)a0;
- (long long)offset;
- (void)dealloc;
- (id)initWithInputStream:(id)a0;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (id)initWithInputStream:(id)a0 initialOffset:(long long)a1;

@end
