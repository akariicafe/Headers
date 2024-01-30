@interface GEORPPlaceProblem : PBCodable <NSCopying> {
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    unsigned int _problematicDepartureSequenceIndex;
    struct { unsigned char has_componentIndex : 1; unsigned char has_componentValueIndex : 1; unsigned char has_problematicDepartureSequenceIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasComponentIndex;
@property (nonatomic) unsigned int componentIndex;
@property (nonatomic) BOOL hasComponentValueIndex;
@property (nonatomic) unsigned int componentValueIndex;
@property (nonatomic) BOOL hasProblematicDepartureSequenceIndex;
@property (nonatomic) unsigned int problematicDepartureSequenceIndex;

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

@end
