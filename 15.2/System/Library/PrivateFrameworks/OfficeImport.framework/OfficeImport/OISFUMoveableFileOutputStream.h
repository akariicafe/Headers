@class NSString;

@interface OISFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
    int mFd;
    NSString *mPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flush;
- (BOOL)moveToPath:(id)a0;
- (id)initWithPath:(id)a0;
- (void)close;
- (id)inputStream;
- (BOOL)canSeek;
- (long long)offset;
- (id)path;
- (void)dealloc;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (BOOL)canCreateInputStream;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;
- (id)initWithTemporaryFile:(id)a0;
- (void)truncateToLength:(long long)a0;

@end
