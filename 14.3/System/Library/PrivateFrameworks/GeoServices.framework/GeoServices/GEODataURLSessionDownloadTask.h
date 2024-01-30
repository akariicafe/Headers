@class NSURL;

@interface GEODataURLSessionDownloadTask : GEODataURLSessionTask {
    NSURL *_downloadedFileURL;
}

- (id)downloadedFileURL;
- (void).cxx_destruct;
- (void)didFinishDownloadingToURL:(id)a0;
- (id)_createBackingTaskWithRequest:(id)a0 session:(id)a1;

@end
