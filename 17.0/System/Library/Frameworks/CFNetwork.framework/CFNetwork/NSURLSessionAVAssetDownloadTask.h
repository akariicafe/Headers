@class NSURL;

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask

@property (readonly) unsigned long long AVAssetDownloadToken;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSURL *destinationURL;

- (id)destinationURL;
- (id)URL;

@end
