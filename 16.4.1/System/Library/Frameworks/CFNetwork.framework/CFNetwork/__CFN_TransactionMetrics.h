@class NSUUID, NSData, __CFN_ConnectionMetrics, __CFN_TaskMetrics, NSDictionary, NSURLResponse, NSURLRequest, NSObject;
@protocol OS_nw_data_transfer_report;

@interface __CFN_TransactionMetrics : NSObject <NSSecureCoding> {
    BOOL _scheduledOriginLoad;
    BOOL _firstOnConnection;
    BOOL _pushed;
    BOOL _APSRelayAttempted;
    BOOL _APSRelaySucceeded;
    int _pidForHAR;
    __CFN_TaskMetrics *_taskMetrics;
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
    NSData *_cachedResponseBody;
    NSDictionary *_tcpInfoBegin;
    NSDictionary *_tcpInfoEnd;
    NSDictionary *_subflowCountsBegin;
    NSDictionary *_subflowCountsEnd;
    NSObject<OS_nw_data_transfer_report> *_dataTransferReport;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) __CFN_ConnectionMetrics *_daemon_connectionMetrics;
@property (readonly, nonatomic) long long _daemon_requestHeaderSize;
@property (readonly, nonatomic) long long _daemon_requestBodyTransferSize;
@property (readonly, nonatomic) long long _daemon_responseHeaderSize;
@property (readonly, nonatomic) long long _daemon_responseBodyTransferSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
