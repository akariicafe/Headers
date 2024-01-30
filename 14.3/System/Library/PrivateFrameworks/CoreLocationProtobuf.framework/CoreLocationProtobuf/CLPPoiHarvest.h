@class CLPPoiTriggerEvent, NSMutableArray;

@interface CLPPoiHarvest : PBCodable <NSCopying>

@property (retain, nonatomic) CLPPoiTriggerEvent *triggerEvent;
@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSMutableArray *accessPoints;

+ (Class)locationsType;
+ (Class)accessPointsType;

- (void)clearLocations;
- (unsigned long long)accessPointsCount;
- (void)clearAccessPoints;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addLocations:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)locationsCount;
- (id)locationsAtIndex:(unsigned long long)a0;
- (void)addAccessPoints:(id)a0;
- (id)accessPointsAtIndex:(unsigned long long)a0;

@end
