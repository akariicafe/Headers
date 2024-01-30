@class NSDate, NSString, NSError, NSURLSessionTaskMetrics, NSURL, NSArray, NWURLSessionRequestBodyInfo, NSURLResponse, NSObject, NSProgress, NSURLRequest, NWURLSession;
@protocol OS_nw_activity, OS_nw_content_context, NWURLSessionResponseConsumer, NWURLSessionRequestBodyProvider, OS_dispatch_queue, OS_nw_connection;

@interface NWURLSessionTask : NSObject <NSCopying> {
    unsigned int _qos;
    NWURLSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    id<NWURLSessionRequestBodyProvider> _requestBodyProvider;
    unsigned long long _suspendCount;
    long long _internalState;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_content_context> *_requestContext;
    NWURLSessionRequestBodyInfo *_requestBody;
    id<NWURLSessionResponseConsumer> _responseConsumer;
    NSURLSessionTaskMetrics *_metrics;
}

@property (readonly, nonatomic) unsigned long long taskIdentifier;
@property (readonly, copy, nonatomic) NSURLRequest *originalRequest;
@property (readonly, copy, nonatomic) NSURLRequest *currentRequest;
@property (readonly, copy, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) NSProgress *progress;
@property (copy, nonatomic) NSDate *earliestBeginDate;
@property (nonatomic) long long countOfBytesClientExpectsToSend;
@property (nonatomic) long long countOfBytesClientExpectsToReceive;
@property (readonly, nonatomic) long long countOfBytesSent;
@property (readonly, nonatomic) long long countOfBytesReceived;
@property (readonly, nonatomic) long long countOfBytesExpectedToSend;
@property (readonly, nonatomic) long long countOfBytesExpectedToReceive;
@property (copy) NSString *taskDescription;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSError *error;
@property float priority;
@property (retain, nonatomic) NSObject<OS_nw_activity> *_nw_activity;
@property (readonly) NSURLSessionTaskMetrics *_incompleteTaskMetrics;
@property (copy, nonatomic) NSString *_pathToDownloadTaskFile;
@property (copy, nonatomic) NSString *_storagePartitionIdentifier;
@property (copy, nonatomic) NSURL *_siteForCookies;
@property (nonatomic) BOOL _isTopLevelNavigation;
@property (nonatomic) BOOL _preconnect;
@property (copy, nonatomic) id /* block */ _cookieTransformCallback;
@property (readonly, nonatomic) NSArray *_resolvedCNAMEChain;

- (void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(id /* block */)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage { } *)a0;
- (id)_timingData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)suspend;
- (void)resume;
- (void)cancel;

@end
