@class NSString;

@interface GEOLogMsgStateARPPhotoSubmission : PBCodable <NSCopying> {
    NSString *_originTarget;
    unsigned int _numberOfAprSuggestedPhotos;
    unsigned int _numberOfPhotos;
    BOOL _isFromMapsSuggesions;
    BOOL _isFromRecommendationCard;
    BOOL _isPlacecardInlineSubmission;
    struct { unsigned char has_numberOfAprSuggestedPhotos : 1; unsigned char has_numberOfPhotos : 1; unsigned char has_isFromMapsSuggesions : 1; unsigned char has_isFromRecommendationCard : 1; unsigned char has_isPlacecardInlineSubmission : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginTarget;
@property (retain, nonatomic) NSString *originTarget;
@property (nonatomic) BOOL hasIsFromRecommendationCard;
@property (nonatomic) BOOL isFromRecommendationCard;
@property (nonatomic) BOOL hasIsFromMapsSuggesions;
@property (nonatomic) BOOL isFromMapsSuggesions;
@property (nonatomic) BOOL hasIsPlacecardInlineSubmission;
@property (nonatomic) BOOL isPlacecardInlineSubmission;
@property (nonatomic) BOOL hasNumberOfPhotos;
@property (nonatomic) unsigned int numberOfPhotos;
@property (nonatomic) BOOL hasNumberOfAprSuggestedPhotos;
@property (nonatomic) unsigned int numberOfAprSuggestedPhotos;

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
- (void).cxx_destruct;

@end
