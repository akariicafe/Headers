@class NSString, NSURL, NSURLSessionTaskTransactionMetrics;

@interface OspreyConnectionMetrics : NSObject {
    NSURLSessionTaskTransactionMetrics *_metrics;
}

@property (readonly, nonatomic) unsigned long long connectionState;
@property (readonly, nonatomic) double fetchStartToDomainLookupStartTime;
@property (readonly, nonatomic) double dnsResolutionTime;
@property (readonly, nonatomic) double connectionEstablishmentTime;
@property (readonly, nonatomic) double tcpConnectTime;
@property (readonly, nonatomic) double secureConnectionTime;
@property (readonly, nonatomic) double fetchStartToFirstByteTime;
@property (readonly, nonatomic) NSString *connectionMethod;
@property (readonly, nonatomic) NSURL *requestURL;

- (void).cxx_destruct;
- (id)initWithMetrics:(id)a0;

@end
