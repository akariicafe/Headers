@class NSString, NSMutableArray;

@interface NTPBTelemetryNetworkEventGroup : PBCodable <NSCopying> {
    struct { unsigned char cellularRadioAccessTechnology : 1; unsigned char eventType : 1; unsigned char wifiReachabilityStatus : 1; } _has;
}

@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasWifiReachabilityStatus;
@property (nonatomic) BOOL wifiReachabilityStatus;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;
@property (readonly, nonatomic) BOOL hasRespondingPop;
@property (retain, nonatomic) NSString *respondingPop;
@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)successesType;
+ (Class)failuresType;

- (id)cellularRadioAccessTechnologyAsString:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (int)StringAsCellularRadioAccessTechnology:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSuccesses:(id)a0;
- (void)addFailures:(id)a0;
- (void)clearSuccesses;
- (unsigned long long)successesCount;
- (id)successesAtIndex:(unsigned long long)a0;
- (void)clearFailures;
- (unsigned long long)failuresCount;
- (id)failuresAtIndex:(unsigned long long)a0;

@end
