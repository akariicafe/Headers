@class PBUnknownFields;

@interface GEOTraversalTimes : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _aggressiveEstimatedSeconds;
    unsigned int _conservativeEstimatedSeconds;
    unsigned int _estimatedSeconds;
    unsigned int _freeflowEstimatedSeconds;
    unsigned int _historicalEstimatedSeconds;
    struct { unsigned char has_aggressiveEstimatedSeconds : 1; unsigned char has_conservativeEstimatedSeconds : 1; unsigned char has_estimatedSeconds : 1; unsigned char has_freeflowEstimatedSeconds : 1; unsigned char has_historicalEstimatedSeconds : 1; } _flags;
}

@property (nonatomic) BOOL hasEstimatedSeconds;
@property (nonatomic) unsigned int estimatedSeconds;
@property (nonatomic) BOOL hasHistoricalEstimatedSeconds;
@property (nonatomic) unsigned int historicalEstimatedSeconds;
@property (nonatomic) BOOL hasFreeflowEstimatedSeconds;
@property (nonatomic) unsigned int freeflowEstimatedSeconds;
@property (nonatomic) BOOL hasAggressiveEstimatedSeconds;
@property (nonatomic) unsigned int aggressiveEstimatedSeconds;
@property (nonatomic) BOOL hasConservativeEstimatedSeconds;
@property (nonatomic) unsigned int conservativeEstimatedSeconds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
