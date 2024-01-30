@class NSString, CLPLocation, NSMutableArray, CLPCellNeighborsGroup;

@interface CLPLteCellTowerLocation : PBCodable <NSCopying> {
    struct { unsigned char cellLatitude : 1; unsigned char cellLongitude : 1; unsigned char bandInfo : 1; unsigned char bandwidth : 1; unsigned char csgId : 1; unsigned char csgIndication : 1; unsigned char deploymentType : 1; unsigned char downlinkBandwidth : 1; unsigned char ecn0 : 1; unsigned char latency : 1; unsigned char maxThroughput : 1; unsigned char pid : 1; unsigned char pmax : 1; unsigned char rscp : 1; unsigned char rssi : 1; unsigned char serverHash : 1; unsigned char timingAdvance : 1; unsigned char uarfcn : 1; unsigned char isLimitedService : 1; unsigned char isStalled : 1; } _has;
}

@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic) int tac;
@property (nonatomic) int ci;
@property (nonatomic) BOOL hasUarfcn;
@property (nonatomic) int uarfcn;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) int pid;
@property (nonatomic) BOOL hasBandInfo;
@property (nonatomic) int bandInfo;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) BOOL hasOperatorName;
@property (retain, nonatomic) NSString *operatorName;
@property (nonatomic) BOOL hasCellLatitude;
@property (nonatomic) double cellLatitude;
@property (nonatomic) BOOL hasCellLongitude;
@property (nonatomic) double cellLongitude;
@property (nonatomic) BOOL hasServerHash;
@property (nonatomic) int serverHash;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) int rscp;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) int rssi;
@property (retain, nonatomic) NSMutableArray *neighbors;
@property (readonly, nonatomic) BOOL hasNeighborGroup;
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic) BOOL hasBandwidth;
@property (nonatomic) int bandwidth;
@property (nonatomic) BOOL hasIsLimitedService;
@property (nonatomic) BOOL isLimitedService;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (retain, nonatomic) NSString *serviceProviderName;
@property (nonatomic) BOOL hasDeploymentType;
@property (nonatomic) unsigned int deploymentType;
@property (nonatomic) BOOL hasDownlinkBandwidth;
@property (nonatomic) unsigned int downlinkBandwidth;
@property (nonatomic) BOOL hasIsStalled;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) BOOL hasLatency;
@property (nonatomic) unsigned int latency;
@property (nonatomic) BOOL hasPmax;
@property (nonatomic) unsigned int pmax;
@property (nonatomic) BOOL hasMaxThroughput;
@property (nonatomic) unsigned int maxThroughput;
@property (nonatomic) BOOL hasCsgIndication;
@property (nonatomic) unsigned int csgIndication;
@property (nonatomic) BOOL hasCsgId;
@property (nonatomic) unsigned int csgId;
@property (nonatomic) BOOL hasTimingAdvance;
@property (nonatomic) int timingAdvance;

+ (Class)neighborType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)neighborAtIndex:(unsigned long long)a0;
- (void)addNeighbor:(id)a0;
- (void)clearNeighbors;
- (unsigned long long)neighborsCount;

@end
