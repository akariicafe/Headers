@class NSURLAuthenticationChallenge, NSOperationQueue;

@interface NSURLDownloadInternal : NSObject {
    struct _CFURLDownload { } *cfDownload;
    struct _CFURLAuthChallenge { } *currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    id delegate;
    BOOL downloadActive;
    NSOperationQueue *_targetQueue;
}

- (void)dealloc;

@end
