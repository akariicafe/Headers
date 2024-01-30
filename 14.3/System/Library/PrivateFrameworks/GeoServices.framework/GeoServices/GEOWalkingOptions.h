@class PBUnknownFields;

@interface GEOWalkingOptions : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _avoidedModes;
    double _preferredSpeed;
    struct { unsigned char has_preferredSpeed : 1; } _flags;
}

@property (nonatomic) BOOL hasPreferredSpeed;
@property (nonatomic) double preferredSpeed;
@property (readonly, nonatomic) unsigned long long avoidedModesCount;
@property (readonly, nonatomic) int *avoidedModes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (void)addAvoidedMode:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)avoidedModesAsString:(int)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setAvoidedModes:(int *)a0 count:(unsigned long long)a1;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (int)StringAsAvoidedModes:(id)a0;
- (int)avoidedModeAtIndex:(unsigned long long)a0;
- (void)clearAvoidedModes;

@end
