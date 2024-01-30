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

- (long long)offset;
- (void)seekToOffset:(long long)a0;
- (void)dealloc;
- (void)close;
- (BOOL)canSeek;
- (id)initWithInputStream:(id)a0;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (id)initWithInputStream:(id)a0 initialOffset:(long long)a1;

@end
