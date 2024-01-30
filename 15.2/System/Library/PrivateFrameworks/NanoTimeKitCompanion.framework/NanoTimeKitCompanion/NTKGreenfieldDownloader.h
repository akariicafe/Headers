@class NSURL, NSURLSessionDownloadTask;

@interface NTKGreenfieldDownloader : NSObject {
    NSURL *_remoteWatchFaceURL;
    NSURLSessionDownloadTask *_downloadTask;
    NSURL *_downloadedFileURL;
}

- (void)cancelDownload;
- (id)_downloadURL;
- (void).cxx_destruct;
- (id)_downloadedFolderURL;
- (long long)_greenfieldErrorFromURLSessionError:(long long)a0;
- (BOOL)_copyFileFromURL:(id)a0;
- (id)initWithWatchFaceURL:(id)a0;
- (void)downloadWithCompletionBlock:(id /* block */)a0;
- (void)downloadCleanUp;

@end
