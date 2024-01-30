@class PHAssetResourceRequestOptions, NSString, NSDictionary, NSProgress, PHAssetResource, PLProgressFollower;
@protocol PHAssetResourceRequestDelegate;

@interface PHAssetResourceRequest : NSObject <PHAssetResourceRequest> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _cancelled;
    NSProgress *_availabilityProgress;
    long long _availabilityPendingCount;
    NSProgress *_fileStreamProgress;
    long long _fileStreamPendingCount;
    NSProgress *_totalProgress;
    PLProgressFollower *_progressFollower;
}

@property (copy, nonatomic) id /* block */ dataHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL loadURLOnly;
@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (readonly, nonatomic) PHAssetResource *assetResource;
@property (readonly, nonatomic) PHAssetResourceRequestOptions *options;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) unsigned long long managerID;
@property (readonly, weak, nonatomic) id<PHAssetResourceRequestDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_globalFileIOQueue;

- (void)cancel;
- (void).cxx_destruct;
- (void)startRequest;
- (id)initWithAssetResource:(id)a0 options:(id)a1 requestID:(int)a2 managerID:(unsigned long long)a3 delegate:(id)a4 dataReceivedHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (id)_initialValidationError;
- (void)_setupTotalProgressIfNeeded;
- (void)_addAvailabilityProgressIfNeeded:(id)a0;
- (void)_setupFilestreamProgressIfNeeded;
- (void)_finishWithFileURL:(id)a0 error:(id)a1;
- (void)_finishAsyncWithFileURL:(id)a0 error:(id)a1;
- (long long)_streamDataAtURL:(id)a0 error:(id *)a1 dataHandler:(id /* block */)a2;
- (void)_updateAssetResourceWithLocallyAvailable:(BOOL)a0 fileURL:(id)a1;

@end
