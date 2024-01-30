@class NSString, CLPLocation, NSMutableArray, CLPCellNeighborsGroup;

@interface CLPNRCellTowerLocation : PBCodable <NSCopying> {
    struct { unsigned char cellLatitude : 1; unsigned char cellLongitude : 1; unsigned char ci : 1; unsigned char bandInfo : 1; unsigned char bandwidth : 1; unsigned char ecn0 : 1; unsigned char gscn : 1; unsigned char mcc : 1; unsigned char mnc : 1; unsigned char nrarfcn : 1; unsigned char pid : 1; unsigned char rscp : 1; unsigned char rssi : 1; unsigned char scs : 1; unsigned char serverHash : 1; unsigned char tac : 1; unsigned char isLimitedService : 1; } _has;
}

@property (nonatomic) BOOL hasMcc;
@property (nonatomic) int mcc;
@property (nonatomic) BOOL hasMnc;
@property (nonatomic) int mnc;
@property (nonatomic) BOOL hasTac;
@property (nonatomic) int tac;
@property (nonatomic) BOOL hasCi;
@property (nonatomic) long long ci;
@property (nonatomic) BOOL hasNrarfcn;
@property (nonatomic) int nrarfcn;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) int pid;
@property (nonatomic) BOOL hasBandInfo;
@property (nonatomic) int bandInfo;
@property (readonly, nonatomic) BOOL hasLocation;
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
@property (nonatomic) BOOL hasScs;
@property (nonatomic) unsigned int scs;
@property (nonatomic) BOOL hasGscn;
@property (nonatomic) unsigned int gscn;

+ (Class)neighborType;

- (unsigned long long)neighborsCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)neighborAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (void)clearNeighbors;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addNeighbor:(id)a0;

@end
