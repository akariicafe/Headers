@class NSString, NSDictionary, NSError, NSNumber;

@interface NPTMetricResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *cdnpop;
@property (retain, nonatomic) NSString *server;
@property (retain, nonatomic) NSString *cdnuuid;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *fetchDate;
@property (retain, nonatomic) NSString *protocolName;
@property (retain, nonatomic) NSString *isReusedConnection;
@property (retain, nonatomic) NSString *isProxyConnection;
@property (nonatomic) double domainLookupTime;
@property (nonatomic) double connectionTime;
@property (nonatomic) double secureConnectionTime;
@property (nonatomic) double requestTime;
@property (nonatomic) double requestToResponseTime;
@property (nonatomic) double responseTime;
@property (nonatomic) double speed;
@property (nonatomic) double stableSpeed;
@property (retain, nonatomic) NSString *isCellular;
@property (retain, nonatomic) NSString *isExpensive;
@property (retain, nonatomic) NSString *isConstrained;
@property (retain, nonatomic) NSString *isMultipath;
@property (retain, nonatomic) NSString *localAddress;
@property (retain, nonatomic) NSString *remoteAddress;
@property (retain, nonatomic) NSNumber *negotiatedTLSCipherSuite;
@property (retain, nonatomic) NSNumber *negotiatedTLSProtocolVersion;
@property (retain, nonatomic) NSNumber *localPort;
@property (retain, nonatomic) NSNumber *remotePort;
@property (retain, nonatomic) NSString *interfaceServiceName;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSNumber *concurrentStreams;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDictionary *asDictionary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)populateWithMetrics:(id)a0;
- (void)populateWithURLResponse:(id)a0;
- (double)timeIntervalSinceDateWithLogging:(id)a0 startDate:(id)a1 nameToLog:(id)a2;
- (BOOL)isEqualToMetricResult:(id)a0;

@end
