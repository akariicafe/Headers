@class NSURL;

@interface FPArchiveTemporaryFolder : NSObject {
    NSURL *_url;
    BOOL _didStartAccessing;
    NSURL *_temporaryFolderURL;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)temporaryFolderURLGetError:(id *)a0;

@end
