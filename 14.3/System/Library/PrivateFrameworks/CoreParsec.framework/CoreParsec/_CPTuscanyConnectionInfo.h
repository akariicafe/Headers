@class NSString, NSDictionary, NSData;

@interface _CPTuscanyConnectionInfo : PBCodable <_CPTuscanyConnectionInfo, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int pathType;
@property (nonatomic) int fallbackReason;
@property (nonatomic) int fallbackReasonCategory;
@property (nonatomic) double fallbackDelay;
@property (nonatomic) int edgeType;
@property (copy, nonatomic) NSString *edgeAddress;
@property (nonatomic) BOOL isMultipath;
@property (nonatomic) unsigned int multipathSubflowCount;
@property (nonatomic) unsigned int multipathConnectedSubflowCount;
@property (nonatomic) unsigned int multipathPrimarySubflowInterfaceIndex;
@property (copy, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property (nonatomic) double firstTxByteTimeStamp;
@property (nonatomic) double firstTxByteDelay;
@property (nonatomic) double connectionDelay;
@property (nonatomic) BOOL TFOsucceeded;
@property (nonatomic) int IPType;
@property (nonatomic) int interfaceType;
@property (nonatomic) unsigned int minimumRTT;
@property (nonatomic) double timeIntervalSinceLastUsage;
@property (nonatomic) double timeToFirstByte;
@property (nonatomic) int tunnelConnectionError;
@property (nonatomic) BOOL isTFOProbeSucceeded;
@property (nonatomic) unsigned int initialBytesLeftOver;
@property (copy, nonatomic) NSDictionary *tcpInfo;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)setMultipathSubflowSwitchCounts:(int)a0 forKey:(id)a1;
- (void)setTcpInfo:(id)a0 forKey:(id)a1;
- (BOOL)getMultipathSubflowSwitchCounts:(int *)a0 forKey:(id)a1;
- (BOOL)getTcpInfo:(id *)a0 forKey:(id)a1;

@end
