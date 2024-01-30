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

+ (Class)failuresType;
+ (Class)successesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsCellularRadioAccessTechnology:(id)a0;
- (void)addFailures:(id)a0;
- (void)addSuccesses:(id)a0;
- (id)cellularRadioAccessTechnologyAsString:(int)a0;
- (void)clearFailures;
- (void)clearSuccesses;
- (id)failuresAtIndex:(unsigned long long)a0;
- (unsigned long long)failuresCount;
- (id)successesAtIndex:(unsigned long long)a0;
- (unsigned long long)successesCount;

@end
