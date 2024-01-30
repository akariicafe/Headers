@class NSString, NSMutableData;

@interface OISFUMemoryOutputStream : NSObject <SFUOutputStream> {
    NSMutableData *mData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (id)inputStream;
- (id)initWithData:(id)a0;
- (BOOL)canSeek;
- (long long)offset;
- (void)dealloc;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (BOOL)canCreateInputStream;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
