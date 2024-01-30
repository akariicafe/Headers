@interface ContextualActionPredictionsDataPhotoFeatures : PBCodable <NSCopying> {
    struct { unsigned char isPhotoWithPeople : 1; unsigned char isPhotoWithText : 1; unsigned char isRotationCandidate : 1; unsigned char isScreenshot : 1; unsigned char isTrimCandidate : 1; } _has;
}

@property (nonatomic) BOOL hasIsPhotoWithPeople;
@property (nonatomic) BOOL isPhotoWithPeople;
@property (nonatomic) BOOL hasIsPhotoWithText;
@property (nonatomic) BOOL isPhotoWithText;
@property (nonatomic) BOOL hasIsScreenshot;
@property (nonatomic) BOOL isScreenshot;
@property (nonatomic) BOOL hasIsRotationCandidate;
@property (nonatomic) BOOL isRotationCandidate;
@property (nonatomic) BOOL hasIsTrimCandidate;
@property (nonatomic) BOOL isTrimCandidate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
