@class NSMutableArray, PBUnknownFields;

@interface GEOPDRating : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_appleRatingCategorys;
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct { unsigned char has_maxScore : 1; unsigned char has_score : 1; unsigned char has_numRatingsUsedForScore : 1; unsigned char has_ratingType : 1; } _flags;
}

@property (nonatomic) BOOL hasRatingType;
@property (nonatomic) int ratingType;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasMaxScore;
@property (nonatomic) double maxScore;
@property (nonatomic) BOOL hasNumRatingsUsedForScore;
@property (nonatomic) int numRatingsUsedForScore;
@property (retain, nonatomic) NSMutableArray *appleRatingCategorys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)appleRatingCategoryType;
+ (id)ratingListForPlaceData:(id)a0 type:(int)a1;
+ (id)ratingForPlaceData:(id)a0 type:(int)a1;
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
- (void)addAppleRatingCategory:(id)a0;
- (unsigned long long)appleRatingCategorysCount;
- (void)clearAppleRatingCategorys;
- (id)appleRatingCategoryAtIndex:(unsigned long long)a0;
- (id)ratingTypeAsString:(int)a0;
- (int)StringAsRatingType:(id)a0;
- (id)description;
- (id)displayTitle;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
