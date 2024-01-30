@class GEORPScorecard;

@interface GEORPScorecardUpdate : PBCodable <NSCopying> {
    GEORPScorecard *_scorecard;
    int _action;
    struct { unsigned char has_action : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasScorecard;
@property (retain, nonatomic) GEORPScorecard *scorecard;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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
- (id)initWithDictionary:(id)a0;
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;

@end
