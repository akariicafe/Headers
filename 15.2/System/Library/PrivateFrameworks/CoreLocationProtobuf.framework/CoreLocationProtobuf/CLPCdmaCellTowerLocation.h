@class NSString, CLPLocation, NSMutableArray, CLPCellNeighborsGroup;

@interface CLPCdmaCellTowerLocation : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _derivedMccs;
    struct { unsigned char bsLatitude : 1; unsigned char bsLongitude : 1; unsigned char sectorLatitude : 1; unsigned char sectorLongitude : 1; unsigned char bandclass : 1; unsigned char celltype : 1; unsigned char channel : 1; unsigned char dayLightSavings : 1; unsigned char ecn0 : 1; unsigned char ltmOffset : 1; unsigned char pnoffset : 1; unsigned char rat : 1; unsigned char rscp : 1; unsigned char serverHash : 1; unsigned char zoneid : 1; unsigned char isLimitedService : 1; } _has;
}

@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic) int sid;
@property (nonatomic) int nid;
@property (nonatomic) int bsid;
@property (nonatomic) BOOL hasBsLatitude;
@property (nonatomic) double bsLatitude;
@property (nonatomic) BOOL hasBsLongitude;
@property (nonatomic) double bsLongitude;
@property (nonatomic) BOOL hasZoneid;
@property (nonatomic) int zoneid;
@property (readonly, nonatomic) BOOL hasSectorid;
@property (retain, nonatomic) NSString *sectorid;
@property (nonatomic) BOOL hasSectorLatitude;
@property (nonatomic) double sectorLatitude;
@property (nonatomic) BOOL hasSectorLongitude;
@property (nonatomic) double sectorLongitude;
@property (nonatomic) BOOL hasBandclass;
@property (nonatomic) int bandclass;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasCelltype;
@property (nonatomic) int celltype;
@property (nonatomic) BOOL hasPnoffset;
@property (nonatomic) int pnoffset;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) int channel;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasServerHash;
@property (nonatomic) int serverHash;
@property (readonly, nonatomic) BOOL hasOperatorName;
@property (retain, nonatomic) NSString *operatorName;
@property (nonatomic) BOOL hasLtmOffset;
@property (nonatomic) int ltmOffset;
@property (nonatomic) BOOL hasDayLightSavings;
@property (nonatomic) int dayLightSavings;
@property (readonly, nonatomic) unsigned long long derivedMccsCount;
@property (readonly, nonatomic) int *derivedMccs;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) int rscp;
@property (retain, nonatomic) NSMutableArray *neighbors;
@property (readonly, nonatomic) BOOL hasNeighborGroup;
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic) BOOL hasIsLimitedService;
@property (nonatomic) BOOL isLimitedService;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (retain, nonatomic) NSString *serviceProviderName;

+ (Class)neighborType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)neighborAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addNeighbor:(id)a0;
- (void)clearDerivedMccs;
- (int)derivedMccAtIndex:(unsigned long long)a0;
- (void)addDerivedMcc:(int)a0;
- (unsigned long long)neighborsCount;
- (void)clearNeighbors;
- (void)setDerivedMccs:(int *)a0 count:(unsigned long long)a1;

@end
