@class NSString;

@interface OISFUGZipFileOutputStream : NSObject <SFUOutputStream> {
    struct gzFile_s { unsigned int x0; char *x1; long long x2; } *_file;
    long long _offset;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gzipExtension;

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

@end
