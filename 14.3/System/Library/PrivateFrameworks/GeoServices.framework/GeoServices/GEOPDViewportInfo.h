@class GEOMapRegion, PBUnknownFields;

@interface GEOPDViewportInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    int _mapType;
    unsigned int _timeSinceMapViewportChanged;
    struct { unsigned char has_mapType : 1; unsigned char has_timeSinceMapViewportChanged : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) int mapType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)viewportInfoForTraits:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)mapTypeAsString:(int)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsMapType:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)initWithTraits:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
