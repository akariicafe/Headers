@class __CFN_ConnectionMetrics, NSString, NSNumber, NSObject;
@protocol OS_nw_establishment_report, OS_nw_endpoint;

@interface _NSURLSessionConnectionEstablishProperties : NSObject <NSSecureCoding> {
    __CFN_ConnectionMetrics *__metrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic, getter=isCellular) BOOL cellular;
@property (readonly, nonatomic, getter=isExpensive) BOOL expensive;
@property (readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property (readonly, nonatomic, getter=isMultipath) BOOL multipath;
@property (readonly, nonatomic) BOOL usedTFO;
@property (readonly, copy, nonatomic) NSString *networkProtocolName;
@property (readonly, copy, nonatomic) NSNumber *negotiatedTLSProtocolVersion;
@property (readonly, copy, nonatomic) NSNumber *negotiatedTLSCipherSuite;
@property (readonly, retain, nonatomic) NSObject<OS_nw_establishment_report> *establishmentReport;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
