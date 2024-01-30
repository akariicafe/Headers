@class NSURL, NSURLSessionDownloadTask;

@interface _TVURLSessionDownloadTaskWrapper : NSObject {
    NSURL *_url;
    NSURLSessionDownloadTask *_downloadTask;
    long long _downloadTaskID;
    long long _state;
}

@property (readonly, nonatomic) long long state;

- (id)initWithURL:(id)a0;
- (void)resumeWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
