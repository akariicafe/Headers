@class CLPPoiTriggerEvent, NSMutableArray;

@interface CLPPoiHarvest : PBCodable <NSCopying>

@property (retain, nonatomic) CLPPoiTriggerEvent *triggerEvent;
@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSMutableArray *accessPoints;

+ (Class)locationsType;
+ (Class)accessPointsType;

- (unsigned long long)locationsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)accessPointsCount;
- (void)clearAccessPoints;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addLocations:(id)a0;
- (unsigned long long)hash;
- (void)clearLocations;
- (id)dictionaryRepresentation;
- (id)locationsAtIndex:(unsigned long long)a0;
- (void)addAccessPoints:(id)a0;
- (id)accessPointsAtIndex:(unsigned long long)a0;

@end
