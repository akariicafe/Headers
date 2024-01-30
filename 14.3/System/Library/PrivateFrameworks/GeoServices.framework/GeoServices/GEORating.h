@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEORating : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_uRL;
    double _maxScore;
    NSString *_provider;
    NSString *_ratingCategoryId;
    NSMutableArray *_reviews;
    double _score;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _numberOfRatings;
    int _numberOfReviews;
    struct { unsigned char has_maxScore : 1; unsigned char has_score : 1; unsigned char has_numberOfRatings : 1; unsigned char has_numberOfReviews : 1; unsigned char read_unknownFields : 1; unsigned char read_uRL : 1; unsigned char read_provider : 1; unsigned char read_ratingCategoryId : 1; unsigned char read_reviews : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasMaxScore;
@property (nonatomic) double maxScore;
@property (nonatomic) BOOL hasNumberOfRatings;
@property (nonatomic) int numberOfRatings;
@property (readonly, nonatomic) BOOL hasProvider;
@property (retain, nonatomic) NSString *provider;
@property (readonly, nonatomic) BOOL hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (retain, nonatomic) NSMutableArray *reviews;
@property (nonatomic) BOOL hasNumberOfReviews;
@property (nonatomic) int numberOfReviews;
@property (readonly, nonatomic) BOOL hasRatingCategoryId;
@property (retain, nonatomic) NSString *ratingCategoryId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)reviewType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addReview:(id)a0;
- (id)initWithSampleSizeForUserRatingScore:(unsigned int)a0 normalizedUserRatingScore:(float)a1;
- (void)writeTo:(id)a0;
- (unsigned long long)reviewsCount;
- (void)clearReviews;
- (id)reviewAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
