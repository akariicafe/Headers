@class NSURLSession, NSString, NWPath, NSOperationQueue, NSURLSessionDataTask, NSObject, NSDate;
@protocol OS_dispatch_source, NSPProberDelegate;

@interface NSPProber : NSObject <NSSecureCoding, NSCopying, NSURLSessionTaskDelegate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<NSPProberDelegate> delegate;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURLSession *probeSession;
@property (retain, nonatomic) NSURLSessionDataTask *dataTask;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *probeRetryTimer;
@property (nonatomic) unsigned long long probeCount;
@property (nonatomic) unsigned long long probeConnectionTimeout;
@property (nonatomic) BOOL probingActive;
@property (nonatomic) BOOL probeOnNetworkChange;
@property (nonatomic) int linkQuality;
@property (retain, nonatomic) NSDate *nextProbeDate;
@property (retain, nonatomic) NWPath *path;
@property (nonatomic) BOOL probePending;
@property (nonatomic) unsigned long long probeSuccessCount;
@property (nonatomic) unsigned long long probeFailedCount;
@property (nonatomic) unsigned long long probeRedirectedCount;
@property (nonatomic) unsigned long long probeServerErrorCount;
@property (nonatomic) unsigned long long probeConnectedCount;
@property (nonatomic) BOOL proxyProber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)handlePathChange:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void)retryNetworkFetch;
- (void)setup;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)resetPendingFetches;
- (void)handleLinkQualityChange:(int)a0;
- (void)startProbing;
- (void)setProbeRetryTimerWithRetryInterval:(unsigned long long)a0;
- (void)sendProbe:(id /* block */)a0;
- (void)probeFailed;
- (void)probeSuccess;
- (void)probeRedirected;
- (void)probeServerError;
- (void)setProbeParametersForLinkQuality;
- (id)initWithDelegate:(id)a0 probeName:(id)a1 linkQuality:(int)a2 path:(id)a3 proxyProber:(BOOL)a4;

@end
