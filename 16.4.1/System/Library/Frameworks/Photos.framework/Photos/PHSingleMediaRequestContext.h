@class NSProgress, PHMediaRequest;

@interface PHSingleMediaRequestContext : PHMediaRequestContext {
    NSProgress *_progress;
    long long _type;
    BOOL _networkAccessAllowed;
    id /* block */ _progressHandler;
}

@property (retain, nonatomic) PHMediaRequest *request;

+ (long long)_indexOfAvProxyFromResources:(id)a0 hasAdjustments:(BOOL)a1 version:(long long)a2;
+ (id)avProxyRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 resultHandler:(id /* block */)a4;
+ (id)originalAdjustmentDataRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 resultHandler:(id /* block */)a4;

- (id)progresses;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (long long)type;
- (id)_lazyProgress;
- (id /* block */)progressHandler;
- (BOOL)isNetworkAccessAllowed;
- (BOOL)isSynchronous;
- (id)initialRequests;
- (void).cxx_destruct;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 type:(long long)a4 networkAccessAllowed:(BOOL)a5 progressHandler:(id /* block */)a6 resultHandler:(id /* block */)a7;

@end
