@class BLTPBBulletin;

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying> {
    struct { unsigned char date : 1; unsigned char updateType : 1; unsigned char shouldPlayLightsAndSirens : 1; unsigned char trafficRestricted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBulletin;
@property (retain, nonatomic) BLTPBBulletin *bulletin;
@property (nonatomic) BOOL hasShouldPlayLightsAndSirens;
@property (nonatomic) BOOL shouldPlayLightsAndSirens;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) unsigned int updateType;
@property (nonatomic) BOOL hasTrafficRestricted;
@property (nonatomic) BOOL trafficRestricted;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
