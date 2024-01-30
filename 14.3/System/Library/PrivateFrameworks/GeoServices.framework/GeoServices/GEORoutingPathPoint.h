@class GEOLocation, PBUnknownFields;

@interface GEORoutingPathPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLocation *_location;
    long long _roadId;
    unsigned int _fow;
    unsigned int _frc;
    int _type;
    struct { unsigned char has_roadId : 1; unsigned char has_fow : 1; unsigned char has_frc : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasRoadId;
@property (nonatomic) long long roadId;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) BOOL hasFrc;
@property (nonatomic) unsigned int frc;
@property (nonatomic) BOOL hasFow;
@property (nonatomic) unsigned int fow;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
- (id)typeAsString:(int)a0;

@end
