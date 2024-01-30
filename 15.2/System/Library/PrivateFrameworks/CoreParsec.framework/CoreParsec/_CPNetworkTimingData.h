@class NSString, NSData, _CPTCPInfo;

@interface _CPNetworkTimingData : PBCodable <_CPNetworkTimingData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *interfaceIdentifier;
@property (copy, nonatomic) NSData *peerAddress;
@property (nonatomic) BOOL connectionRace;
@property (nonatomic) BOOL connectionReused;
@property (retain, nonatomic) _CPTCPInfo *startTimeCounts;
@property (retain, nonatomic) _CPTCPInfo *stopTimeCounts;
@property (copy, nonatomic) NSString *connectionUUID;
@property (copy, nonatomic) NSString *networkProtocolName;
@property (nonatomic) BOOL QUICWhitelistedDomain;
@property (nonatomic) unsigned int redirectCount;
@property (nonatomic) unsigned int redirectCountW3C;
@property (nonatomic) unsigned int requestHeaderSize;
@property (nonatomic) unsigned int responseBodyBytesDecoded;
@property (nonatomic) unsigned int responseBodyBytesReceived;
@property (nonatomic) unsigned int responseHeaderSize;
@property (nonatomic) BOOL TFOSuccess;
@property (nonatomic) double timingDataInit;
@property (nonatomic) unsigned int connectStart;
@property (nonatomic) unsigned int connectEnd;
@property (nonatomic) unsigned int domainLookupStart;
@property (nonatomic) unsigned int domainLookupEnd;
@property (nonatomic) unsigned int fetchStart;
@property (nonatomic) unsigned int redirectStart;
@property (nonatomic) unsigned int redirectEnd;
@property (nonatomic) unsigned int requestStart;
@property (nonatomic) unsigned int requestEnd;
@property (nonatomic) unsigned int responseStart;
@property (nonatomic) unsigned int responseEnd;
@property (nonatomic) unsigned int secureConnectStart;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (id)initWithTelemetryDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;

@end
