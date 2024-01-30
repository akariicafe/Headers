@class CLPSatelliteInfo;

@interface CLPSatelliteReport : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGps;
@property (retain, nonatomic) CLPSatelliteInfo *gps;
@property (readonly, nonatomic) BOOL hasGlonass;
@property (retain, nonatomic) CLPSatelliteInfo *glonass;
@property (readonly, nonatomic) BOOL hasQzss;
@property (retain, nonatomic) CLPSatelliteInfo *qzss;
@property (readonly, nonatomic) BOOL hasGalileo;
@property (retain, nonatomic) CLPSatelliteInfo *galileo;

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

@end
