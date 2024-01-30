@class PHImageRequestOptions;

@interface PHAdjustmentDataRequestContext : PHMediaRequestContext

@property (readonly, nonatomic) PHImageRequestOptions *options;

- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initialRequests;
- (long long)type;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (BOOL)isNetworkAccessAllowed;

@end
