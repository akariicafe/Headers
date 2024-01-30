@class CLPMeta, NSMutableArray;

@interface CLPCellWifiCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *cellTowerLocations;
@property (retain, nonatomic) NSMutableArray *cdmaCellTowerLocations;
@property (retain, nonatomic) NSMutableArray *lteCellTowerLocations;
@property (retain, nonatomic) NSMutableArray *nrCellTowerLocations;
@property (retain, nonatomic) NSMutableArray *wifiAPLocations;
@property (retain, nonatomic) NSMutableArray *scdmaCellTowerLocations;
@property (retain, nonatomic) NSMutableArray *cellOutOfServiceInfos;

+ (Class)cellTowerLocationType;
+ (Class)cdmaCellTowerLocationType;
+ (Class)lteCellTowerLocationType;
+ (Class)nrCellTowerLocationType;
+ (Class)wifiAPLocationType;
+ (Class)scdmaCellTowerLocationType;
+ (Class)cellOutOfServiceInfoType;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addCellTowerLocation:(id)a0;
- (void)addWifiAPLocation:(id)a0;
- (void)addCdmaCellTowerLocation:(id)a0;
- (void)addLteCellTowerLocation:(id)a0;
- (void)addScdmaCellTowerLocation:(id)a0;
- (void)addCellOutOfServiceInfo:(id)a0;
- (void)addNrCellTowerLocation:(id)a0;
- (unsigned long long)cellTowerLocationsCount;
- (void)clearCellTowerLocations;
- (id)cellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)wifiAPLocationsCount;
- (void)clearWifiAPLocations;
- (id)wifiAPLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)cdmaCellTowerLocationsCount;
- (void)clearCdmaCellTowerLocations;
- (id)cdmaCellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)lteCellTowerLocationsCount;
- (void)clearLteCellTowerLocations;
- (id)lteCellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)scdmaCellTowerLocationsCount;
- (void)clearScdmaCellTowerLocations;
- (id)scdmaCellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)cellOutOfServiceInfosCount;
- (void)clearCellOutOfServiceInfos;
- (id)cellOutOfServiceInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)nrCellTowerLocationsCount;
- (void)clearNrCellTowerLocations;
- (id)nrCellTowerLocationAtIndex:(unsigned long long)a0;

@end
