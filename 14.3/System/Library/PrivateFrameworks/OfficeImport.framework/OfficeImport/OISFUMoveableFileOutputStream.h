@class NSString;

@interface OISFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
    int mFd;
    NSString *mPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (id)path;
- (void)close;
- (void)dealloc;
- (long long)offset;
- (BOOL)canSeek;
- (void)flush;
- (id)inputStream;
- (BOOL)moveToPath:(id)a0;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (BOOL)canCreateInputStream;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;
- (id)initWithTemporaryFile:(id)a0;
- (void)truncateToLength:(long long)a0;

@end
