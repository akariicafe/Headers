@class NSString, NSURL, NSURLSessionDownloadTask;

@interface VUIARAssetRequest : NSObject

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSURL *remoteURL;
@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) NSURLSessionDownloadTask *task;
@property (retain, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL isDownloading;

- (void)cancelDownload;
- (id)cachePath;
- (void).cxx_destruct;
- (id)_prefixForString:(id)a0;
- (id)cacheDownloadedFileFromLocation:(id)a0;
- (id)initWithRemoteURL:(id)a0 shareURL:(id)a1 fileName:(id)a2;
- (void)recordLog:(id)a0;
- (void)startDownloadWithSession:(id)a0 completionHandler:(id /* block */)a1;

@end
