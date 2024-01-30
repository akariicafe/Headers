@class NSString;

@interface BMPBFindMyLocationChangeEvent : PBCodable <NSCopying> {
    struct { unsigned char latitude : 1; unsigned char longitude : 1; unsigned char activityState : 1; unsigned char locationChangeType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (nonatomic) BOOL hasLocationChangeType;
@property (nonatomic) int locationChangeType;
@property (nonatomic) BOOL hasActivityState;
@property (nonatomic) int activityState;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;

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
- (id)locationChangeTypeAsString:(int)a0;
- (int)StringAsLocationChangeType:(id)a0;
- (id)activityStateAsString:(int)a0;
- (int)StringAsActivityState:(id)a0;

@end
