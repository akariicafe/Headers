@class ICMediaAVAssetDownloadOptions, ICURLResponse, ICURLRequest, NSURL, NSData, ICStoreRequestContext, ICURLSession;

@interface ICMediaAssetDownloadRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSURL *_assetURL;
    ICMediaAVAssetDownloadOptions *_downloadOptions;
    ICURLSession *_downloadSession;
    ICURLRequest *_request;
    ICURLResponse *_response;
}

@property (copy, nonatomic) NSURL *destinationURL;
@property (nonatomic) BOOL allowsCellularData;
@property (nonatomic) BOOL allowsCellularFallback;
@property (nonatomic, getter=isDiscretionary) BOOL discretionary;
@property (nonatomic) BOOL requiresPower;
@property (copy, nonatomic) NSData *resumeData;

- (void)cancel;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)a0 assetURL:(id)a1 avAssetDownloadOptions:(id)a2 resumeData:(id)a3;
- (id)_sessionIdentifier;
- (void)performRequestWithResponseHandler:(id /* block */)a0;

@end
