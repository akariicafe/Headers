@class NSString;
@protocol SFUOutputStream;

@interface OISFUOffsetOutputStream : NSObject <SFUOutputStream> {
    id<SFUOutputStream> mOutputStream;
    long long mInitialOffset;
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
