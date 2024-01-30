@class PHMediaResourceResult, NSString, PHAssetResourceRequest, PHAssetResource, NSMutableData;
@protocol PHMediaRequestDelegate;

@interface PHMediaResourceRequest : PHMediaRequest <PHAssetResourceRequestDelegate> {
    BOOL _networkAccessAllowed;
    long long _downloadIntent;
    long long _downloadPriority;
    BOOL _synchronous;
    PHAssetResourceRequest *_internalRequest;
    NSMutableData *_compositeData;
    PHMediaResourceResult *_dataResult;
}

@property (weak, nonatomic) id<PHMediaRequestDelegate> delegate;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) PHAssetResource *resource;
@property (readonly, nonatomic) long long resourceType;
@property (readonly, nonatomic) BOOL wantsURLOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 assetResource:(id)a5 networkAccessAllowed:(BOOL)a6 downloadIntent:(long long)a7 downloadPriority:(long long)a8 wantsURLOnly:(BOOL)a9 synchronous:(BOOL)a10 delegate:(id)a11;
- (void)_finishWithError:(id)a0;
- (void)handleAvailabilityChangeForResource:(id)a0 url:(id)a1 info:(id)a2 error:(id)a3;
- (void)assetResourceRequest:(id)a0 didFinishWithError:(id)a1;
- (void)_handleDidFindFileURL:(id)a0;
- (void)startRequest;
- (void)_reportProgress:(double)a0;
- (void)_receiveAssetResourceDataPart:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isSynchronous;

@end
