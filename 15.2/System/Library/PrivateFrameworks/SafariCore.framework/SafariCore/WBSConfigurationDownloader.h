@class NSString, NSURL, WBSConfigurationDataTransformer, NSURLSessionDataTask;

@interface WBSConfigurationDownloader : NSObject {
    WBSConfigurationDataTransformer *_transformer;
    NSURLSessionDataTask *_dataTask;
    NSURL *_baseURL;
    NSString *_fileName;
    BOOL _isCancelled;
}

+ (id)new;

- (void)downloadConfigurationWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (id)initWithFileName:(id)a0 dataTransformer:(id)a1;

@end
