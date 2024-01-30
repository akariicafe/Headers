@class NSMutableURLRequest, NSURL, NSError, TMLJSONObject;
@protocol TKNetworkTask;

@interface TKCloudKitFetch : NSObject {
    id<TKNetworkTask> _queryTask;
    id<TKNetworkTask> _downloadTask;
}

@property (retain, nonatomic) NSURL *downloadURL;
@property (retain, nonatomic) NSMutableURLRequest *urlRequest;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) TMLJSONObject *response;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) BOOL cancelled;

- (void)send;
- (void)setResponse:(id)a0;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadAssetFromCloudKit;
- (void)handleDownloadResponse:(id)a0 error:(id)a1;
- (void)handleResponse:(id)a0 data:(id)a1 responseError:(id)a2;
- (void)tmlDispose;

@end
