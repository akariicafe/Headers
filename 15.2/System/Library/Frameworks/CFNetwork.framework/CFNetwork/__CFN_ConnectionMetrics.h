@class NSString, __CFN_SessionMetrics, NSDictionary, NSUUID, NSObject;
@protocol OS_nw_connection, OS_nw_establishment_report, OS_nw_endpoint;

@interface __CFN_ConnectionMetrics : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
    BOOL _needsCachedTCPInfoAtEnd;
    BOOL _needsCachedSubflowCounts;
    BOOL _TLSConfigured;
    BOOL _cellular;
    BOOL _expensive;
    BOOL _constrained;
    BOOL _multipath;
    BOOL _usedTFO;
    BOOL _usedByTransaction;
    BOOL _coalesced;
    BOOL _discretionary;
    BOOL _dataBudgetingEnabled;
    unsigned short _negotiatedTLSProtocolVersion;
    unsigned short _negotiatedTLSCipherSuite;
    int _privacyStance;
    NSObject<OS_nw_connection> *_connection;
    __CFN_SessionMetrics *_sessionMetrics;
    NSDictionary *_cachedTCPInfoAtEnd;
    NSDictionary *_cachedSubflowCounts;
    NSUUID *_UUID;
    unsigned long long _identifier;
    NSUUID *_initiatingTransactionID;
    double _beginTime;
    double _establishTime;
    double _firstByteReceivedTime;
    double _endTime;
    NSObject<OS_nw_endpoint> *_endpoint;
    long long _http3DiscoveryStatus;
    NSObject<OS_nw_endpoint> *_localEndpoint;
    NSObject<OS_nw_endpoint> *_remoteEndpoint;
    NSString *_interfaceName;
    NSString *_networkProtocolName;
    NSObject<OS_nw_establishment_report> *_establishmentReport;
    struct weak_ptr<TransportConnection> { struct TransportConnection *__ptr_; struct __shared_weak_count *__cntrl_; } _transportConnection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *_daemon_interfaceName;
@property (readonly, nonatomic, getter=_daemon_isDiscretionary) BOOL _daemon_discretionary;
@property (readonly, nonatomic, getter=_daemon_isDataBudgetingEnabled) BOOL _daemon_dataBudgetingEnabled;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
