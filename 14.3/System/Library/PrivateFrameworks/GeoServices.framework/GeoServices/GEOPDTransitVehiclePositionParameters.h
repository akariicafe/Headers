@class PBUnknownFields;

@interface GEOPDTransitVehiclePositionParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _tripIds;
}

@property (readonly, nonatomic) unsigned long long tripIdsCount;
@property (readonly, nonatomic) unsigned long long *tripIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearTripIds;
- (unsigned long long)tripIdAtIndex:(unsigned long long)a0;
- (void)setTripIds:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addTripId:(unsigned long long)a0;

@end
