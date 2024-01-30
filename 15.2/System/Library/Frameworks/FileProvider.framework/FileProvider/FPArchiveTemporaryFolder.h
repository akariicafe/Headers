@class NSURL;

@interface FPArchiveTemporaryFolder : NSObject {
    NSURL *_url;
    BOOL _didStartAccessing;
    NSURL *_temporaryFolderURL;
}

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)temporaryFolderURLGetError:(id *)a0;

@end
