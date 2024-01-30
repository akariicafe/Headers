@class NSString, NSData;

@interface _CPTCPInfo : PBCodable <_CPTCPInfo, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int avgRTT;
@property (nonatomic) unsigned long long cellRXPackets;
@property (nonatomic) unsigned long long cellTXPackets;
@property (nonatomic) unsigned int connectAttempts;
@property (nonatomic) unsigned int connectSuccesses;
@property (nonatomic) unsigned int minRTT;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long rxDuplicateBytes;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) unsigned long long rxPackets;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long txPackets;
@property (nonatomic) unsigned long long txRetransmitPackets;
@property (nonatomic) unsigned int varRTT;
@property (nonatomic) unsigned long long wifiRXPackets;
@property (nonatomic) unsigned long long wifiTXPackets;
@property (nonatomic) unsigned long long wiredRXPackets;
@property (nonatomic) unsigned long long wiredTXPackets;
@property (copy, nonatomic) NSString *statsType;
@property (nonatomic) unsigned long long txRetransmitBytes;
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
- (id)initWithTelemetryDictionary:(id)a0;

@end
