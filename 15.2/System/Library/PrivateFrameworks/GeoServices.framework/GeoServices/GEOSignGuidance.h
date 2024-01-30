@class GEOPBTransitArtwork, GEOJunctionInfo, PBUnknownFields, PBDataReader, NSMutableArray, GEONameInfo;

@interface GEOSignGuidance : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artworkOverride;
    GEOJunctionInfo *_junctionInfo;
    NSMutableArray *_secondarySigns;
    GEONameInfo *_shieldName;
    NSMutableArray *_signDetails;
    NSMutableArray *_signTitles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _maneuverArrowOverride;
    unsigned int _stackRanking;
    struct { unsigned char has_maneuverArrowOverride : 1; unsigned char has_stackRanking : 1; unsigned char read_unknownFields : 1; unsigned char read_artworkOverride : 1; unsigned char read_junctionInfo : 1; unsigned char read_secondarySigns : 1; unsigned char read_shieldName : 1; unsigned char read_signDetails : 1; unsigned char read_signTitles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *signTitles;
@property (retain, nonatomic) NSMutableArray *signDetails;
@property (retain, nonatomic) NSMutableArray *secondarySigns;
@property (nonatomic) BOOL hasManeuverArrowOverride;
@property (nonatomic) int maneuverArrowOverride;
@property (readonly, nonatomic) BOOL hasShieldName;
@property (retain, nonatomic) GEONameInfo *shieldName;
@property (nonatomic) BOOL hasStackRanking;
@property (nonatomic) unsigned int stackRanking;
@property (readonly, nonatomic) BOOL hasJunctionInfo;
@property (retain, nonatomic) GEOJunctionInfo *junctionInfo;
@property (readonly, nonatomic) BOOL hasArtworkOverride;
@property (retain, nonatomic) GEOPBTransitArtwork *artworkOverride;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)signTitleType;
+ (Class)signDetailType;
+ (Class)secondarySignType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (void)addSignTitle:(id)a0;
- (void)addSignDetail:(id)a0;
- (void)addSecondarySign:(id)a0;
- (unsigned long long)signTitlesCount;
- (void)clearSignTitles;
- (id)signTitleAtIndex:(unsigned long long)a0;
- (unsigned long long)signDetailsCount;
- (void)clearSignDetails;
- (id)signDetailAtIndex:(unsigned long long)a0;
- (unsigned long long)secondarySignsCount;
- (void)clearSecondarySigns;
- (id)secondarySignAtIndex:(unsigned long long)a0;
- (id)maneuverArrowOverrideAsString:(int)a0;
- (int)StringAsManeuverArrowOverride:(id)a0;
- (id)dictionaryRepresentation;

@end
