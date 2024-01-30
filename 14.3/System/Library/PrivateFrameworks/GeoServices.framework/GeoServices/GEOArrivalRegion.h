@class GEOMapRegion, PBUnknownFields;

@interface GEOArrivalRegion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_arrivalRegion;
    int _arrivalRegionAction;
    unsigned int _endNavigationTimeoutThreshold;
    struct { unsigned char has_arrivalRegionAction : 1; unsigned char has_endNavigationTimeoutThreshold : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasArrivalRegion;
@property (retain, nonatomic) GEOMapRegion *arrivalRegion;
@property (nonatomic) BOOL hasArrivalRegionAction;
@property (nonatomic) int arrivalRegionAction;
@property (nonatomic) BOOL hasEndNavigationTimeoutThreshold;
@property (nonatomic) unsigned int endNavigationTimeoutThreshold;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)arrivalRegionActionAsString:(int)a0;
- (int)StringAsArrivalRegionAction:(id)a0;
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

@end
