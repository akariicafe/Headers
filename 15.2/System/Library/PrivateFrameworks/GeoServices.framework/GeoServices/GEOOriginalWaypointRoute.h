@class NSMutableArray, PBUnknownFields;

@interface GEOOriginalWaypointRoute : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_routeLegs;
    unsigned int _identifier;
    int _purpose;
    struct { unsigned char has_identifier : 1; unsigned char has_purpose : 1; } _flags;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) int purpose;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)routeLegType;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)addRouteLeg:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)purposeAsString:(int)a0;
- (int)StringAsPurpose:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)routeLegsCount;
- (void)clearRouteLegs;
- (id)routeLegAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
