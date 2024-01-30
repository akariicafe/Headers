@class PBUnknownFields, GEOComposedWaypoint;

@interface MSPRidesharingTrip : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
