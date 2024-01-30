@class PHAssetResourceRequestOptions, NSString, NSDictionary, NSURL, PHAssetResource, PHAssetResourceRequest, NSError;
@protocol PHAssetResourceRequestDelegate;

@interface PHAssetResourceWriteRequest : NSObject <PHAssetResourceRequestDelegate, PHAssetResourceRequest> {
    PHAssetResourceRequest *_dataRequest;
    NSError *_error;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _completionHandlerLock;
}

@property (readonly, nonatomic) NSURL *destinationFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHAssetResource *assetResource;
@property (readonly, nonatomic) PHAssetResourceRequestOptions *options;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) unsigned long long managerID;
@property (readonly, weak, nonatomic) id<PHAssetResourceRequestDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) NSString *taskIdentifier;

- (void)startRequest;
- (void)cancel;
- (void).cxx_destruct;
- (void)setErrorIfNone:(id)a0;
- (void)_handleDidFindFileURL:(id)a0;
- (void)assetResourceRequest:(id)a0 didFinishWithError:(id)a1;
- (id)initWithAssetResource:(id)a0 destinationFileURL:(id)a1 options:(id)a2 requestID:(int)a3 managerID:(unsigned long long)a4 delegate:(id)a5 completionHandler:(id /* block */)a6;

@end
