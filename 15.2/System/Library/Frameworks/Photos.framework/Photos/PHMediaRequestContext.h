@class PHImageResourceChooser, NSString, PHAsset, PHImageDisplaySpec, NSMutableDictionary, NSMutableArray, NSMutableSet, NSObject, NSProgress;
@protocol OS_dispatch_queue, PHMediaRequestContextDelegate;

@interface PHMediaRequestContext : NSObject <PHImageRequestDelegate, PHAdjustmentDataRequestDelegate> {
    id /* block */ _resultHandler;
    _Atomic unsigned long long _nextID;
    _Atomic int _repairAttemptCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_requests;
    NSMutableSet *_inflightRequestIdentifiers;
    BOOL _isCancelled;
    NSMutableDictionary *_progressByTaskIdentifier;
    NSProgress *_totalProgress;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *chooserQueue;

@property (retain, nonatomic) PHImageResourceChooser *imageResourceChooser;
@property (retain, nonatomic) PHImageDisplaySpec *displaySpec;
@property (weak, nonatomic) id<PHMediaRequestContextDelegate> delegate;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic) unsigned long long signpostLayoutID;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long managerID;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)imageRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 imageRequestOptions:(id)a3 displaySpec:(id)a4 resultHandler:(id /* block */)a5;
+ (id)videoRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 videoRequestOptions:(id)a3 intent:(long long)a4 resultHandler:(id /* block */)a5;
+ (id)livePhotoRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 livePhotoRequestOptions:(id)a3 displaySpec:(id)a4 resultHandler:(id /* block */)a5;
+ (id)contentEditingInputRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 useRAWAsUnadjustedBase:(BOOL)a4 resultHandler:(id /* block */)a5;

- (id /* block */)progressHandler;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 resultHandler:(id /* block */)a4;
- (BOOL)shouldReportProgress;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (BOOL)representsShareableHighQualityResource;
- (void)adjustmentDataRequest:(id)a0 didReportProgress:(double)a1 completed:(BOOL)a2 error:(id)a3;
- (id)_requestWithIdentifier:(id)a0;
- (void)_registerAndStartRequests:(id)a0;
- (void)_setupProgressIfNeeded;
- (unsigned long long)nextRequestIndex;
- (double)totalProgressFraction;
- (void)beginCustomAsyncWorkWithIdentifier:(id)a0;
- (void)finishCustomAsyncWorkWithIdentifier:(id)a0;
- (id)_produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2;
- (void)setProgress:(id)a0 forRequestIdentifier:(id)a1;
- (id)_produceChildRequestsForRequest:(id)a0 withResult:(id)a1;
- (void)requestWithIdentifier:(id)a0 didReportProgress:(double)a1 completed:(BOOL)a2 error:(id)a3;
- (void)mediaRequest:(id)a0 didFinishWithResult:(id)a1;
- (void)mediaRequest:(id)a0 didReportProgress:(id)a1;
- (void)start;
- (void)imageRequest:(id)a0 isRequestingScheduledWorkBlock:(id /* block */)a1;
- (void)mediaRequest:(id)a0 didRequestRetryWithHintsAllowed:(BOOL)a1;
- (BOOL)imageRequestCanRequestRepair:(id)a0;
- (void)mediaRequest:(id)a0 didFindLocallyAvailableResult:(BOOL)a1 isDegraded:(BOOL)a2;
- (void)imageRequest:(id)a0 isQueryingCacheAndDidWait:(BOOL *)a1 didFindImage:(BOOL *)a2 resultHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initialRequests;
- (BOOL)isCancelled;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (BOOL)isNetworkAccessAllowed;
- (void)cancel;
- (id)progresses;
- (BOOL)isSynchronous;

@end
