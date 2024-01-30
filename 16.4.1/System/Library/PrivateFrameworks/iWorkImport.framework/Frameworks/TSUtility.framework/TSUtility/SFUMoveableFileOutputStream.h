@class NSString;

@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
    int mFd;
    NSString *mPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (id)path;
- (void)flush;
- (long long)offset;
- (void)dealloc;
- (void)close;
- (BOOL)canSeek;
- (id)inputStream;
- (id)initWithTemporaryFile:(id)a0;
- (id)closeLocalStream;
- (BOOL)canCreateInputStream;
- (BOOL)moveToPath:(id)a0;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)truncateToLength:(long long)a0;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
