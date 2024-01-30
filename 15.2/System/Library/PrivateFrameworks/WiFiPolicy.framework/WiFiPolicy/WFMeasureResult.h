@class NSError;

@interface WFMeasureResult : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) double backhaulThroughput;
@property (copy, nonatomic) NSError *downloadError;
@property (nonatomic) long long gatewayMinRTT;
@property (nonatomic) long long gatewayMaxRTT;
@property (nonatomic) long long gatewayPacketLoss;
@property (nonatomic) long long localDNSMinRTT;
@property (nonatomic) long long localDNSMaxRTT;
@property (nonatomic) long long localDNSPacketLoss;
@property (nonatomic) long long publicDNSMinRTT;
@property (nonatomic) long long publicDNSMaxRTT;
@property (nonatomic) long long publicDNSPacketLoss;
@property (nonatomic) BOOL dnsSuccess;
@property (nonatomic) BOOL backhaulResultsValid;
@property (nonatomic) BOOL gatewayResultsValid;
@property (nonatomic) BOOL localResultsValid;
@property (nonatomic) BOOL publicResultsValid;
@property (nonatomic) BOOL dnsResultsValid;

+ (void)initialize;

- (id)statusForLocal;
- (id)allPrimitiveProperties;
- (id)typeAsString;
- (id)description;
- (void).cxx_destruct;
- (id)statusForInternet;
- (id)initWithType:(unsigned long long)a0;
- (id)statusForDNS;
- (id)binnedProperty:(id)a0;

@end
