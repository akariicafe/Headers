@interface PMCard : PBCodable <NSCopying> {
    struct { unsigned char freshness : 1; unsigned char mailDateReceived : 1; unsigned char fullScore : 1; unsigned char lightScore : 1; unsigned char textScore : 1; } _has;
}

@property (nonatomic) BOOL hasTextScore;
@property (nonatomic) float textScore;
@property (nonatomic) BOOL hasLightScore;
@property (nonatomic) float lightScore;
@property (nonatomic) BOOL hasFullScore;
@property (nonatomic) float fullScore;
@property (nonatomic) BOOL hasMailDateReceived;
@property (nonatomic) double mailDateReceived;
@property (nonatomic) BOOL hasFreshness;
@property (nonatomic) double freshness;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
