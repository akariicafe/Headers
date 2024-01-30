@class NSData;

@interface ETPAnger : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char normalizedCenterX : 1; unsigned char normalizedCenterY : 1; } _has;
}

@property (nonatomic) BOOL hasDuration;
@property (nonatomic) float duration;
@property (nonatomic) BOOL hasNormalizedCenterX;
@property (nonatomic) float normalizedCenterX;
@property (nonatomic) BOOL hasNormalizedCenterY;
@property (nonatomic) float normalizedCenterY;
@property (readonly, nonatomic) BOOL hasDelays;
@property (retain, nonatomic) NSData *delays;
@property (readonly, nonatomic) BOOL hasPoints;
@property (retain, nonatomic) NSData *points;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
