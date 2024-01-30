@class PHMediaResourceResult, NSString, PHAssetResourceRequest, PHAssetResource, NSMutableData;
@protocol PHMediaRequestDelegate;

@interface PHMediaResourceRequest : PHMediaRequest <PHAssetResourceRequestDelegate> {
    BOOL _networkAccessAllowed;
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

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 assetResource:(id)a5 networkAccessAllowed:(BOOL)a6 wantsURLOnly:(BOOL)a7 synchronous:(BOOL)a8 delegate:(id)a9;
- (void)_reportProgress:(double)a0;
- (void)_receiveAssetResourceDataPart:(id)a0;
- (void)_finishWithError:(id)a0;
- (void)startRequest;
- (BOOL)isSynchronous;
- (void)handleAvailabilityChangeForResource:(id)a0 url:(id)a1 info:(id)a2 error:(id)a3;
- (void)assetResourceRequest:(id)a0 didFindFileURL:(id)a1;
- (void)assetResourceRequest:(id)a0 didFinishWithError:(id)a1;

@end
