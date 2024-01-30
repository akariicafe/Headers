@interface ETPHeartbeat : PBCodable <NSCopying> {
    struct { unsigned char beatsPerMinute : 1; unsigned char duration : 1; unsigned char heartbreakTime : 1; unsigned char normalizedCenterX : 1; unsigned char normalizedCenterY : 1; unsigned char rotation : 1; } _has;
}

@property (nonatomic) BOOL hasBeatsPerMinute;
@property (nonatomic) float beatsPerMinute;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasNormalizedCenterX;
@property (nonatomic) float normalizedCenterX;
@property (nonatomic) BOOL hasNormalizedCenterY;
@property (nonatomic) float normalizedCenterY;
@property (nonatomic) BOOL hasRotation;
@property (nonatomic) float rotation;
@property (nonatomic) BOOL hasHeartbreakTime;
@property (nonatomic) float heartbreakTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
