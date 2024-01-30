@interface GEOLogMsgStateMapsFeatures : PBCodable <NSCopying> {
    int _favoritesCount;
    int _followedPublisherCount;
    int _personalCollectionsCount;
    int _savedCollectionsCount;
    int _submittedPhotosCount;
    int _submittedRatingsCount;
    BOOL _homeFavoriteSet;
    BOOL _schoolFavoriteSet;
    BOOL _transitFavoriteSet;
    BOOL _workFavoriteSet;
    struct { unsigned char has_favoritesCount : 1; unsigned char has_followedPublisherCount : 1; unsigned char has_personalCollectionsCount : 1; unsigned char has_savedCollectionsCount : 1; unsigned char has_submittedPhotosCount : 1; unsigned char has_submittedRatingsCount : 1; unsigned char has_homeFavoriteSet : 1; unsigned char has_schoolFavoriteSet : 1; unsigned char has_transitFavoriteSet : 1; unsigned char has_workFavoriteSet : 1; } _flags;
}

@property (nonatomic) BOOL hasHomeFavoriteSet;
@property (nonatomic) BOOL homeFavoriteSet;
@property (nonatomic) BOOL hasWorkFavoriteSet;
@property (nonatomic) BOOL workFavoriteSet;
@property (nonatomic) BOOL hasSchoolFavoriteSet;
@property (nonatomic) BOOL schoolFavoriteSet;
@property (nonatomic) BOOL hasFavoritesCount;
@property (nonatomic) int favoritesCount;
@property (nonatomic) BOOL hasPersonalCollectionsCount;
@property (nonatomic) int personalCollectionsCount;
@property (nonatomic) BOOL hasSavedCollectionsCount;
@property (nonatomic) int savedCollectionsCount;
@property (nonatomic) BOOL hasFollowedPublisherCount;
@property (nonatomic) int followedPublisherCount;
@property (nonatomic) BOOL hasSubmittedRatingsCount;
@property (nonatomic) int submittedRatingsCount;
@property (nonatomic) BOOL hasSubmittedPhotosCount;
@property (nonatomic) int submittedPhotosCount;
@property (nonatomic) BOOL hasTransitFavoriteSet;
@property (nonatomic) BOOL transitFavoriteSet;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
