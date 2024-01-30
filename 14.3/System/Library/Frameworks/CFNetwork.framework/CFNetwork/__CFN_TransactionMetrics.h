@class NSURLRequest, NSUUID, __CFN_SessionMetrics, NSURLResponse, NSDictionary, __CFN_TaskMetrics, __CFN_ConnectionMetrics;

@interface __CFN_TransactionMetrics : NSObject <NSSecureCoding> {
    BOOL _scheduledOriginLoad;
    BOOL _firstOnConnection;
    BOOL _pushed;
    BOOL _APSRelayAttempted;
    BOOL _APSRelaySucceeded;
    __CFN_TaskMetrics *_taskMetrics;
    __CFN_SessionMetrics *_sessionMetrics;
    long long _lastResponseHeaderSize;
    long long _lastResponseBodySize;
    long long _lastResponseBodyTransferSize;
    NSUUID *_UUID;
    NSURLRequest *_request;
    NSURLRequest *_transferredRequest;
    NSURLResponse *_cachedResponse;
    NSURLResponse *_lastResponse;
    __CFN_ConnectionMetrics *_connectionMetrics;
    long long _requestHeaderSize;
    long long _requestBodySize;
    long long _requestBodyTransferSize;
    long long _responseHeaderSize;
    long long _responseBodySize;
    long long _responseBodyTransferSize;
    double _beginTime;
    double _endTime;
    double _cacheLookupBeginTime;
    double _cacheLookupEndTime;
    double _requestBeginTime;
    double _requestEndTime;
    double _responseBeginTime;
    double _responseEndTime;
    unsigned long long _endReason;
    long long _schedulingTier;
    long long _options;
    NSDictionary *_tcpInfoBegin;
    NSDictionary *_tcpInfoEnd;
    NSDictionary *_subflowCountsBegin;
    NSDictionary *_subflowCountsEnd;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) __CFN_ConnectionMetrics *_daemon_connectionMetrics;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
