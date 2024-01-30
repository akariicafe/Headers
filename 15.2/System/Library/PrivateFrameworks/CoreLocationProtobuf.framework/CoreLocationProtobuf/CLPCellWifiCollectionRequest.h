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

- (void)clearCellOutOfServiceInfos;
- (unsigned int)requestTypeCode;
- (unsigned long long)wifiAPLocationsCount;
- (void)addLteCellTowerLocation:(id)a0;
- (void)addWifiAPLocation:(id)a0;
- (void)clearCellTowerLocations;
- (Class)responseClass;
- (id)cellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)nrCellTowerLocationsCount;
- (id)cdmaCellTowerLocationAtIndex:(unsigned long long)a0;
- (void)addNrCellTowerLocation:(id)a0;
- (void)addCellTowerLocation:(id)a0;
- (void)addCellOutOfServiceInfo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addScdmaCellTowerLocation:(id)a0;
- (id)description;
- (void)clearLteCellTowerLocations;
- (id)wifiAPLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)lteCellTowerLocationsCount;
- (void)clearNrCellTowerLocations;
- (unsigned long long)cdmaCellTowerLocationsCount;
- (void)clearWifiAPLocations;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)cellOutOfServiceInfoAtIndex:(unsigned long long)a0;
- (void)clearScdmaCellTowerLocations;
- (void)writeTo:(id)a0;
- (void)addCdmaCellTowerLocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)cellOutOfServiceInfosCount;
- (unsigned long long)scdmaCellTowerLocationsCount;
- (id)nrCellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)lteCellTowerLocationAtIndex:(unsigned long long)a0;
- (id)scdmaCellTowerLocationAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)clearCdmaCellTowerLocations;
- (unsigned long long)cellTowerLocationsCount;

@end
