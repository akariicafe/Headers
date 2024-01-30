@interface _NSFileWatcherFileHandleInfo : NSObject {
    int fileHandle;
    BOOL closed;
}

@property (readonly) BOOL isDirectory;

+ (id)openFileWithPath:(id)a0;

- (BOOL)verifyAccessByAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)dealloc;
- (void)close;
- (id)description;

@end
