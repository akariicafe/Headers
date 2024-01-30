@class NSMutableArray, PBUnknownFields;

@interface GEOLaneInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arrows;
    BOOL _hov;
    BOOL _preferredForMultipleManeuvers;
    BOOL _supportsManeuver;
    struct { unsigned char has_hov : 1; unsigned char has_preferredForMultipleManeuvers : 1; unsigned char has_supportsManeuver : 1; } _flags;
}

@property (nonatomic) BOOL hasSupportsManeuver;
@property (nonatomic) BOOL supportsManeuver;
@property (nonatomic) BOOL hasPreferredForMultipleManeuvers;
@property (nonatomic) BOOL preferredForMultipleManeuvers;
@property (nonatomic) BOOL hasHov;
@property (nonatomic) BOOL hov;
@property (retain, nonatomic) NSMutableArray *arrows;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)arrowType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addArrow:(id)a0;
- (void)clearArrows;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)arrowsCount;
- (id)arrowAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
