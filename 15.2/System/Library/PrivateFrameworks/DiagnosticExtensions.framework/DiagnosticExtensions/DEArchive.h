@class NSURL;

@interface DEArchive : NSObject {
    struct archive { } *_archive;
    BOOL _hasClosedArchive;
}

@property (retain) NSURL *tarGzUrl;
@property (retain) NSURL *sourceDir;

- (id)initWithURL:(id)a0;
- (void)closeArchive;
- (void).cxx_destruct;
- (void)dealloc;
- (struct archive { } *)archiverForUrl:(id)a0;
- (BOOL)addFile:(id)a0 withPathName:(id)a1;

@end
