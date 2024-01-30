@class PHAsset, NSString, NSMutableArray;

@interface PHMediaRequest : NSObject {
    _Atomic BOOL _cancelled;
    NSString *_identifierString;
    NSMutableArray *_progresses;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) unsigned long long requestIndex;
@property (readonly, nonatomic) unsigned long long managerID;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) long long contextType;
@property (nonatomic) unsigned long long signpostID;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isSynchronous) BOOL synchronous;
@property (readonly, nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (readonly, nonatomic) long long downloadIntent;
@property (readonly, nonatomic) long long downloadPriority;
@property (nonatomic) BOOL wantsProgress;

- (void)handleAvailabilityChangeForResource:(id)a0 url:(id)a1 info:(id)a2 error:(id)a3;
- (id)identifierString;
- (id)sendMakeAvailableRequestForResource:(id)a0 reply:(id /* block */)a1;
- (void)recordMetricsWithMetricsHandler:(id /* block */)a0;
- (void)startRequest;
- (id)sendResourceRepairRequestForResource:(id)a0 errorCodes:(id)a1 reply:(id /* block */)a2;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4;
- (void).cxx_destruct;
- (id)sendResourceRepairRequestWithErrorCodes:(id)a0 reply:(id /* block */)a1;
- (void)cancel;

@end
