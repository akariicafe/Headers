@interface ATXNotificationsPBContentFeatures : PBCodable <NSCopying> {
    struct { unsigned char maxEntityScore : 1; unsigned char sumCount : 1; unsigned char titleMatch : 1; unsigned char uniqueCount : 1; } _has;
}

@property (nonatomic) BOOL hasSumCount;
@property (nonatomic) float sumCount;
@property (nonatomic) BOOL hasTitleMatch;
@property (nonatomic) float titleMatch;
@property (nonatomic) BOOL hasUniqueCount;
@property (nonatomic) float uniqueCount;
@property (nonatomic) BOOL hasMaxEntityScore;
@property (nonatomic) float maxEntityScore;

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
