@class NSUUID, NSString, NSDate, NSURLResponse, NSURLRequest, NSObject, NSNumber, __CFN_TransactionMetrics;
@protocol OS_nw_establishment_report, OS_nw_data_transfer_report;

@interface NSURLSessionTaskTransactionMetrics : NSObject <NSSecureCoding> {
    BOOL __forCache;
    __CFN_TransactionMetrics *__metrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL _secureConnection;
@property (readonly) BOOL _localCache;
@property (readonly) BOOL _serverPush;
@property (readonly) BOOL _connectionRace;
@property (readonly) unsigned int _redirected;
@property (readonly, copy) NSString *_localAddressAndPort;
@property (readonly, copy) NSString *_remoteAddressAndPort;
@property (readonly, copy) NSUUID *_connectionIdentifier;
@property (readonly) long long _requestHeaderBytesSent;
@property (readonly) long long _responseHeaderBytesReceived;
@property (readonly) long long _responseBodyBytesReceived;
@property (readonly) long long _responseBodyBytesDecoded;
@property (readonly) BOOL _apsRelayAttempted;
@property (readonly) BOOL _apsRelaySucceeded;
@property (readonly) long long _totalBytesSent;
@property (readonly) long long _totalBytesReceived;
@property (readonly) int _negotiatedTLSProtocol;
@property (readonly) unsigned short _negotiatedTLSCipher;
@property (readonly) BOOL _usesMultipath;
@property (readonly, copy) NSDate *_firstByteReceivedDate;
@property (readonly, copy) NSString *_interfaceName;
@property (readonly) int _privacyStance;
@property (readonly, retain) NSObject<OS_nw_establishment_report> *_establishmentReport;
@property (readonly, retain) NSObject<OS_nw_data_transfer_report> *_dataTransferReport;
@property (readonly, copy) NSString *_proxyAddress;
@property (readonly, copy) NSNumber *_proxyPort;
@property (readonly) BOOL _isUnlistedTracker;
@property (nonatomic) struct { double domainLookupBeginTime; double connectBeginTime; unsigned int domainLookupDuration; unsigned int connectDuration; unsigned int secureConnectionDuration; BOOL secure; } _connectionTiming;
@property (nonatomic) BOOL _connectionTimingCached;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSURLResponse *response;
@property (readonly, copy) NSDate *fetchStartDate;
@property (readonly, copy) NSDate *domainLookupStartDate;
@property (readonly, copy) NSDate *domainLookupEndDate;
@property (readonly, copy) NSDate *connectStartDate;
@property (readonly, copy) NSDate *secureConnectionStartDate;
@property (readonly, copy) NSDate *secureConnectionEndDate;
@property (readonly, copy) NSDate *connectEndDate;
@property (readonly, copy) NSDate *requestStartDate;
@property (readonly, copy) NSDate *requestEndDate;
@property (readonly, copy) NSDate *responseStartDate;
@property (readonly, copy) NSDate *responseEndDate;
@property (readonly, copy) NSString *networkProtocolName;
@property (readonly, getter=isProxyConnection) BOOL proxyConnection;
@property (readonly, getter=isReusedConnection) BOOL reusedConnection;
@property (readonly) long long resourceFetchType;
@property (readonly) long long countOfRequestHeaderBytesSent;
@property (readonly) long long countOfRequestBodyBytesSent;
@property (readonly) long long countOfRequestBodyBytesBeforeEncoding;
@property (readonly) long long countOfResponseHeaderBytesReceived;
@property (readonly) long long countOfResponseBodyBytesReceived;
@property (readonly) long long countOfResponseBodyBytesAfterDecoding;
@property (readonly, copy) NSString *localAddress;
@property (readonly, copy) NSNumber *localPort;
@property (readonly, copy) NSString *remoteAddress;
@property (readonly, copy) NSNumber *remotePort;
@property (readonly, copy) NSNumber *negotiatedTLSProtocolVersion;
@property (readonly, copy) NSNumber *negotiatedTLSCipherSuite;
@property (readonly, getter=isCellular) BOOL cellular;
@property (readonly, getter=isExpensive) BOOL expensive;
@property (readonly, getter=isConstrained) BOOL constrained;
@property (readonly, getter=isMultipath) BOOL multipath;
@property (readonly) long long domainResolutionProtocol;

+ (id)new;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
